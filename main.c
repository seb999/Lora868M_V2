#include "mcc_generated_files/mcc.h"
#include "misc.h"
#include "adxl.h"
#include "main.h"
#include <stdbool.h>
#include <__null.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

bool isGpsAccess = false;
bool isLoraAccess = false;
bool isMotionStopped = false;
        
char lora[40]="";
char gps[40]="";
char hex[10]="";
char gpsHex[30]="";

char * token;
char * latitude;
char * latitudeDec;
char * longitude;
char * longitudeDec;

int counter = 0;
int counterMotion = 0;
int debugger = 0;
    
void main(void)
{
    SYSTEM_Initialize();
    GIE = 0;
    
    //__delay_sec(2);
    SWDTEN = 1;
    CLRWDT();  
    
    //debug china board -put one by one back
    //ADXL_Init();
    //EUART_GPS();
    //__delay_ms(500);
    //InitGPS();
    
    //remove this one after debug
    EUART_LORA(); 
     __delay_ms(100);  
    //Change PIC Baud Rate to 57600;
    SP1BRGL = 0x8A;
    SP1BRGH = 0x00;
    __delay_ms(100);  
    //------------------------end to remove
    
   GIE = 1;
   IOCIE = 1;

   blinkGreen(1);
    //TImer0 interruption Off
    //INTCONbits.TMR0IE = 0;
    while (1)
    {    
        //blinkGreen(5);
        //blinkRed(1);
        CLRWDT(); 
        
    }
}
//----INTERRUPTON METHOD-----
void Inter_sw1()
{       
    CLRWDT();
    
    //wait that user release button
    while(SW1_PORT == 0);
    
    //Read GPS position or exit method
    EUART_GPS();
    if(!ReadGPS()) return;
    
    //Look for LORA NETWORK
    EUART_LORA();
    LoraSendData();
}

void Inter_adxl(void)
{
    blinkGreen(3);
    
    //Routine 1
//    EUART_GPS();
//    if(!ReadGPS()) return;
//    
//    //Look for LORA NETWORK
//    EUART_LORA();
//    LoraSendData();
    
    //Routine 2
//    if(!isMotionStopped){
//        EUART_LORA();
//        if(!LoraCheckNetwork()) return;
//
//        EUART_GPS();
//        if(!ReadGPS()) return;
//
//        EUART_LORA();
//        LoraSendData();
//    }
}

void Inter_timer()
{
    counter++;
    if(counter==200){
        if(isGpsAccess) blinkOrange(1);
        if(isLoraAccess) blinkGreen(1);
        if(!isGpsAccess && !isLoraAccess) blinkRed(1);
        counter = 0;
        debugger++;
        
        if(debugger == 4){
            //TImer0 interruption Off
            INTCONbits.TMR0IE = 0;
            LoraDebug();
            debugger=0;
        }
        
        //Future
//        if(counterMotion == 20){
//            isMotionStopped = false;
//            counterMotion = 0;
//        }
        //remove after debug used to setup the device
//        LORA_RESET_SetLow();
//        __delay_ms(200);
//        LORA_RESET_SetHigh();
//        __delay_ms(200);
//        SendUartCmd("mac set appeui 70B3D57ED0007651\r\n"); 
//        ReadUartCmd(lora);
//        SendUartCmd("mac set appkey 10813222DF93BB1FF5A891F68E67DC21\r\n"); 
//        ReadUartCmd(lora);
//        SendUartCmd("mac save\r\n"); 
//        ReadUartCmd(lora);
    } 
}

//---------------------------

bool LoraCheckNetwork(){
    LORA_RESET_SetLow();
    __delay_ms(200);
    LORA_RESET_SetHigh();
     __delay_ms(200);
    //SendUartCmd("sys reset\r\n"); 
    //ReadUartCmd(lora);  //read serial number
    
    SendUartCmd("mac join otaa\r\n");
    ReadUartCmd(lora);  //read ok
    ReadUartCmd(lora);  //read denied/accepted
   
    token = strtok(lora," \r\n");
    if(strcmp(token,"accepted") != 0){
        blinkOrange(1);
        isLoraAccess = false;
        return false;
    }
    return true;
}

bool ReadGPS()
{  
    CLRWDT();
    //LED_ORANGE_SetHigh();
    SendUartCmd("$PUBX,40,GLL,1,1,0,0,0\r\n"); //GPS ON
    ReadUartCmd(gps);
    ReadUartCmd(gps);//we read twice if empty string
    SendUartCmd("$PUBX,40,GLL,1,0,0,0,0\r\n");// GPS OFF
    //LED_ORANGE_SetLow();
    
    token = strtok (gps," ,");//READ root code
    if(strcmp(token,"$GNGLL") != 0){ 
        //blinkRed(1);
        isGpsAccess = false;
        return false;
    }
   
    latitude = strtok (NULL,"."); //Latitude
    latitudeDec = strtok (NULL,","); //Latitude decimal .
    
    token = strtok (NULL,","); //READ 'N' or exit
    if(strcmp(token,"N") != 0){
        blinkRed(1);
        isGpsAccess = false;
        return false;
    }
    
    longitude = strtok (NULL,"."); //Longitude 
    longitudeDec = strtok (NULL,","); //Longitude decimal
    
    //Convert to hex and concatenate
    strcpy(gpsHex,"");
      
    sprintf(hex, "%X", atoi(latitude));
    strcat(gpsHex,NormalizeHex(hex)); 
    sprintf(hex, "%X", atoi(latitudeDec));
    strcat(gpsHex,NormalizeHex(hex)); 
    sprintf(hex, "%X", atoi(longitude));
    strcat(gpsHex,NormalizeHex(hex)); 
    sprintf(hex, "%X", atoi(longitudeDec));
    strcat(gpsHex,NormalizeHex(hex)); 
    SendUartCmd(gpsHex);
    //blinkGreen(2);
    isGpsAccess = true;
    blinkOrange(1);
    return true;
}

bool LoraSendData(){
    LORA_RESET_SetLow();
    __delay_ms(200);
    LORA_RESET_SetHigh();
     __delay_ms(200);
    SendUartCmd("sys reset\r\n"); 
    ReadUartCmd(lora);  //read serial number
    
     CLRWDT();//watch dog can reset before end of routine
    SendUartCmd("mac join otaa\r\n");
    ReadUartCmd(lora);  //read ok
    ReadUartCmd(lora);  //read denied or accepted
   
    token = strtok(lora," \r\n");
    if(strcmp(token,"accepted") != 0){
        blinkOrange(1);
        isLoraAccess = false;
        return false;
    }
    CLRWDT();   
    //send GPS position
    char str[50];
    strcpy(str,"mac tx uncnf 9 ");
    strcat(str, gpsHex);
    strcat(str, "\r\n");
    SendUartCmd(str);
    ReadUartCmd(lora);  //read ok 
    ReadUartCmd(lora);   //read mac_tx_ok or not
    
    token = strtok(lora," \r\n");
    if(strcmp(token,"mac_tx_ok") != 0){
        SendUartCmd("send data failed");
        blinkOrange(1);
        isLoraAccess = false;
        return false;
    }
    blinkGreen(3);
    isLoraAccess = true;
    isMotionStopped = true;
    counterMotion = 0;
    return true;
}

//to be deleted, used for debugging
bool LoraDebug(){
    LORA_RESET_SetLow();
    __delay_ms(200);
    LORA_RESET_SetHigh();
    // __delay_ms(200);
    //SendUartCmd("sys reset\r\n"); 
    ReadUartCmd(lora);  //read serial number
    
    CLRWDT();//watch dog can reset before end of routine
    SendUartCmd("mac join otaa\r\n");
    ReadUartCmd(lora);  //read ok
    ReadUartCmd(lora);  //read denied or accepted
   
    token = strtok(lora," \r\n");
    if(strcmp(token,"accepted") != 0){
        INTCONbits.TMR0IE = 1;
        blinkRed(2);
        return false;
    }
    CLRWDT();   
    
    SendUartCmd("mac tx uncnf 9 17206EB1070C01E9\r\n");
    ReadUartCmd(lora);  //read ok 
    ReadUartCmd(lora);   //read mac_tx_ok or not
    
    token = strtok(lora," \r\n");
    if(strcmp(token,"mac_tx_ok") != 0){
        INTCONbits.TMR0IE = 1;
        SendUartCmd("send data failed");
        blinkRed(2);
        return false;
    }
    blinkGreen(3);
    SendUartCmd("GPS data sent\n"); 
    INTCONbits.TMR0IE = 1;
    return true;
}

void Sleep(){
    SWDTEN = 0;
    TMR0IE = 0; //stop timer interruption
    SLEEP();
    //WakeUp();
}

//void WakeUp(){
//    SWDTEN = 1;
//    TMR0IE = 1;
//}