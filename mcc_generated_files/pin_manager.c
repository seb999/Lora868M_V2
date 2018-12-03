/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26.2
        Device            :  PIC16F1709
        Driver Version    :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"


void (*IOCAF0_InterruptHandler)(void);
void (*IOCBF7_InterruptHandler)(void);
void (*IOCCF1_InterruptHandler)(void);
void (*IOCCF7_InterruptHandler)(void);


void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */   
    LATA = 0x00;    
    LATB = 0x40;    
    LATC = 0x00;    

    /**
    TRISx registers
    */    
    TRISA = 0x21;
    TRISB = 0xB0;
    TRISC = 0x11;

    /**
    ANSELx registers
    */   
    ANSELC = 0x00;
    ANSELB = 0x00;
    ANSELA = 0x00;

    /**
    WPUx registers
    */ 
    WPUB = 0x80;
    WPUA = 0x08;
    WPUC = 0x00;
    OPTION_REGbits.nWPUEN = 0;

    /**
    ODx registers
    */   
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    

    /**
    IOCx registers
    */
    // interrupt on change for group IOCAF - flag
    IOCAFbits.IOCAF0 = 0;
    // interrupt on change for group IOCAN - negative
    IOCANbits.IOCAN0 = 0;
    // interrupt on change for group IOCAP - positive
    IOCAPbits.IOCAP0 = 1;
    // interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF7 = 0;
    // interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN7 = 1;
    // interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP7 = 0;
    // interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF1 = 0;
    IOCCFbits.IOCCF7 = 0;
    // interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN1 = 0;
    IOCCNbits.IOCCN7 = 1;
    // interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP1 = 1;
    IOCCPbits.IOCCP7 = 0;

    // register default IOC callback functions at runtime; use these methods to register a custom function
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);
    IOCBF7_SetInterruptHandler(IOCBF7_DefaultInterruptHandler);
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);
    IOCCF7_SetInterruptHandler(IOCCF7_DefaultInterruptHandler);
   
    // Enable IOCI interrupt 
    INTCONbits.IOCIE = 1; 
    
    
    bool state = (unsigned char)GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    RC1PPSbits.RC1PPS = 0x10;   //RC1->MSSP:SCK;
    SSPDATPPSbits.SSPDATPPS = 0x10;   //RC0->MSSP:SDI;
    RA2PPSbits.RA2PPS = 0x12;   //RA2->MSSP:SDO;
    SSPCLKPPSbits.SSPCLKPPS = 0x11;   //RC1->MSSP:SCK;
    
    //RXPPSbits.RXPPS = 0x14;   //RC4->EUSART:RX;
    //RA4PPSbits.RA4PPS = 0x14;   //RA4->EUSART:TX;
    //RC5PPSbits.RC5PPS = 0x14;   //RC5->EUSART:TX;

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS

    GIE = state;
}       

void PIN_MANAGER_IOC(void)
{   
    // interrupt on change for pin IOCAF0
    if(IOCAFbits.IOCAF0 == 1)
    {
        IOCAF0_ISR();  
    }                          

    // interrupt on change for pin IOCBF7
    if(IOCBFbits.IOCBF7 == 1)
    {
        IOCBF7_ISR();  
    }                          

    // interrupt on change for pin IOCCF1
    if(IOCCFbits.IOCCF1 == 1)
    {
        IOCCF1_ISR();  
    }                          

    // interrupt on change for pin IOCCF7
    if(IOCCFbits.IOCCF7 == 1)
    {
        IOCCF7_ISR();  
    }                          


}

/**
   IOCAF0 Interrupt Service Routine
*/
void IOCAF0_ISR(void) {

    // Add custom IOCAF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF0_InterruptHandler)
    {
        IOCAF0_InterruptHandler();
    }
    IOCAFbits.IOCAF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF0 at application runtime
*/
void IOCAF0_SetInterruptHandler(void* InterruptHandler){
    IOCAF0_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF0
*/
void IOCAF0_DefaultInterruptHandler(void){
    // add your IOCAF0 interrupt custom code
    // or set custom function using IOCAF0_SetInterruptHandler()
}

/**
   IOCBF7 Interrupt Service Routine
*/
void IOCBF7_ISR(void) {

    // Add custom IOCBF7 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCBF7_InterruptHandler)
    {
        IOCBF7_InterruptHandler();
    }
    IOCBFbits.IOCBF7 = 0;
}

/**
  Allows selecting an interrupt handler for IOCBF7 at application runtime
*/
void IOCBF7_SetInterruptHandler(void* InterruptHandler){
    IOCBF7_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCBF7
*/
void IOCBF7_DefaultInterruptHandler(void){
    // add your IOCBF7 interrupt custom code
    // or set custom function using IOCBF7_SetInterruptHandler()
}

/**
   IOCCF1 Interrupt Service Routine
*/
void IOCCF1_ISR(void) {

    // Add custom IOCCF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF1_InterruptHandler)
    {
        IOCCF1_InterruptHandler();
    }
    IOCCFbits.IOCCF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF1 at application runtime
*/
void IOCCF1_SetInterruptHandler(void* InterruptHandler){
    IOCCF1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF1
*/
void IOCCF1_DefaultInterruptHandler(void){
    // add your IOCCF1 interrupt custom code
    // or set custom function using IOCCF1_SetInterruptHandler()
}

/**
   IOCCF7 Interrupt Service Routine
*/
void IOCCF7_ISR(void) {

    // Add custom IOCCF7 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF7_InterruptHandler)
    {
        IOCCF7_InterruptHandler();
    }
    IOCCFbits.IOCCF7 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF7 at application runtime
*/
void IOCCF7_SetInterruptHandler(void* InterruptHandler){
    IOCCF7_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF7
*/
void IOCCF7_DefaultInterruptHandler(void){
    // add your IOCCF7 interrupt custom code
    // or set custom function using IOCCF7_SetInterruptHandler()
}

/**
 End of File
*/