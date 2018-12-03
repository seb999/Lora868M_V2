/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26.2
        Device            :  PIC16F1709
        Version           :  1.01
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


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ADXL_INT2 aliases
#define ADXL_INT2_TRIS               TRISAbits.TRISA0
#define ADXL_INT2_LAT                LATAbits.LATA0
#define ADXL_INT2_PORT               PORTAbits.RA0
#define ADXL_INT2_WPU                WPUAbits.WPUA0
#define ADXL_INT2_OD                ODCONAbits.ODA0
#define ADXL_INT2_ANS                ANSELAbits.ANSA0
#define ADXL_INT2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ADXL_INT2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ADXL_INT2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ADXL_INT2_GetValue()           PORTAbits.RA0
#define ADXL_INT2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ADXL_INT2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ADXL_INT2_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define ADXL_INT2_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define ADXL_INT2_SetPushPull()    do { ODCONAbits.ODA0 = 1; } while(0)
#define ADXL_INT2_SetOpenDrain()   do { ODCONAbits.ODA0 = 0; } while(0)
#define ADXL_INT2_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define ADXL_INT2_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set ADXL_CS aliases
#define ADXL_CS_TRIS               TRISAbits.TRISA1
#define ADXL_CS_LAT                LATAbits.LATA1
#define ADXL_CS_PORT               PORTAbits.RA1
#define ADXL_CS_WPU                WPUAbits.WPUA1
#define ADXL_CS_OD                ODCONAbits.ODA1
#define ADXL_CS_ANS                ANSELAbits.ANSA1
#define ADXL_CS_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ADXL_CS_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ADXL_CS_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ADXL_CS_GetValue()           PORTAbits.RA1
#define ADXL_CS_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ADXL_CS_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ADXL_CS_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define ADXL_CS_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define ADXL_CS_SetPushPull()    do { ODCONAbits.ODA1 = 1; } while(0)
#define ADXL_CS_SetOpenDrain()   do { ODCONAbits.ODA1 = 0; } while(0)
#define ADXL_CS_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define ADXL_CS_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS               TRISAbits.TRISA2
#define SDO_LAT                LATAbits.LATA2
#define SDO_PORT               PORTAbits.RA2
#define SDO_WPU                WPUAbits.WPUA2
#define SDO_OD                ODCONAbits.ODA2
#define SDO_ANS                ANSELAbits.ANSA2
#define SDO_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SDO_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SDO_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SDO_GetValue()           PORTAbits.RA2
#define SDO_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SDO_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define SDO_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define SDO_SetPushPull()    do { ODCONAbits.ODA2 = 1; } while(0)
#define SDO_SetOpenDrain()   do { ODCONAbits.ODA2 = 0; } while(0)
#define SDO_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define SDO_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set TX aliases
#define TX_TRIS               TRISAbits.TRISA4
#define TX_LAT                LATAbits.LATA4
#define TX_PORT               PORTAbits.RA4
#define TX_WPU                WPUAbits.WPUA4
#define TX_OD                ODCONAbits.ODA4
#define TX_ANS                ANSELAbits.ANSA4
#define TX_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define TX_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define TX_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define TX_GetValue()           PORTAbits.RA4
#define TX_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define TX_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define TX_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define TX_SetPushPull()    do { ODCONAbits.ODA4 = 1; } while(0)
#define TX_SetOpenDrain()   do { ODCONAbits.ODA4 = 0; } while(0)
#define TX_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define TX_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LORA_RESET aliases
#define LORA_RESET_TRIS               TRISBbits.TRISB6
#define LORA_RESET_LAT                LATBbits.LATB6
#define LORA_RESET_PORT               PORTBbits.RB6
#define LORA_RESET_WPU                WPUBbits.WPUB6
#define LORA_RESET_OD                ODCONBbits.ODB6
#define LORA_RESET_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define LORA_RESET_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define LORA_RESET_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define LORA_RESET_GetValue()           PORTBbits.RB6
#define LORA_RESET_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define LORA_RESET_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define LORA_RESET_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define LORA_RESET_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define LORA_RESET_SetPushPull()    do { ODCONBbits.ODB6 = 1; } while(0)
#define LORA_RESET_SetOpenDrain()   do { ODCONBbits.ODB6 = 0; } while(0)

// get/set SW1 aliases
#define SW1_TRIS               TRISBbits.TRISB7
#define SW1_LAT                LATBbits.LATB7
#define SW1_PORT               PORTBbits.RB7
#define SW1_WPU                WPUBbits.WPUB7
#define SW1_OD                ODCONBbits.ODB7
#define SW1_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SW1_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SW1_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SW1_GetValue()           PORTBbits.RB7
#define SW1_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SW1_SetPullup()      do { WPUBbits.WPUB7 = 1; } while(0)
#define SW1_ResetPullup()    do { WPUBbits.WPUB7 = 0; } while(0)
#define SW1_SetPushPull()    do { ODCONBbits.ODB7 = 1; } while(0)
#define SW1_SetOpenDrain()   do { ODCONBbits.ODB7 = 0; } while(0)

// get/set SDI aliases
#define SDI_TRIS               TRISCbits.TRISC0
#define SDI_LAT                LATCbits.LATC0
#define SDI_PORT               PORTCbits.RC0
#define SDI_WPU                WPUCbits.WPUC0
#define SDI_OD                ODCONCbits.ODC0
#define SDI_ANS                ANSELCbits.ANSC0
#define SDI_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SDI_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SDI_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SDI_GetValue()           PORTCbits.RC0
#define SDI_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SDI_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define SDI_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define SDI_SetPushPull()    do { ODCONCbits.ODC0 = 1; } while(0)
#define SDI_SetOpenDrain()   do { ODCONCbits.ODC0 = 0; } while(0)
#define SDI_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define SDI_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS               TRISCbits.TRISC1
#define SCK_LAT                LATCbits.LATC1
#define SCK_PORT               PORTCbits.RC1
#define SCK_WPU                WPUCbits.WPUC1
#define SCK_OD                ODCONCbits.ODC1
#define SCK_ANS                ANSELCbits.ANSC1
#define SCK_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SCK_GetValue()           PORTCbits.RC1
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SCK_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define SCK_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define SCK_SetPushPull()    do { ODCONCbits.ODC1 = 1; } while(0)
#define SCK_SetOpenDrain()   do { ODCONCbits.ODC1 = 0; } while(0)
#define SCK_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define SCK_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LED_GREEN aliases
#define LED_GREEN_TRIS               TRISCbits.TRISC3
#define LED_GREEN_LAT                LATCbits.LATC3
#define LED_GREEN_PORT               PORTCbits.RC3
#define LED_GREEN_WPU                WPUCbits.WPUC3
#define LED_GREEN_OD                ODCONCbits.ODC3
#define LED_GREEN_ANS                ANSELCbits.ANSC3
#define LED_GREEN_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_GREEN_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_GREEN_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_GREEN_GetValue()           PORTCbits.RC3
#define LED_GREEN_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_GREEN_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_GREEN_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_GREEN_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_GREEN_SetPushPull()    do { ODCONCbits.ODC3 = 1; } while(0)
#define LED_GREEN_SetOpenDrain()   do { ODCONCbits.ODC3 = 0; } while(0)
#define LED_GREEN_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_GREEN_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()     do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()   do { WPUCbits.WPUC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()    do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()   do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()   do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()         PORTCbits.RC5
#define RC5_SetDigitalInput()   do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()  do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()     do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()   do { WPUCbits.WPUC5 = 0; } while(0)

// get/set LED_RED aliases
#define LED_RED_TRIS               TRISCbits.TRISC6
#define LED_RED_LAT                LATCbits.LATC6
#define LED_RED_PORT               PORTCbits.RC6
#define LED_RED_WPU                WPUCbits.WPUC6
#define LED_RED_OD                ODCONCbits.ODC6
#define LED_RED_ANS                ANSELCbits.ANSC6
#define LED_RED_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_RED_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_RED_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_RED_GetValue()           PORTCbits.RC6
#define LED_RED_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_RED_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_RED_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define LED_RED_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define LED_RED_SetPushPull()    do { ODCONCbits.ODC6 = 1; } while(0)
#define LED_RED_SetOpenDrain()   do { ODCONCbits.ODC6 = 0; } while(0)
#define LED_RED_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED_RED_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED_ORANGE aliases
#define LED_ORANGE_TRIS               TRISCbits.TRISC7
#define LED_ORANGE_LAT                LATCbits.LATC7
#define LED_ORANGE_PORT               PORTCbits.RC7
#define LED_ORANGE_WPU                WPUCbits.WPUC7
#define LED_ORANGE_OD                ODCONCbits.ODC7
#define LED_ORANGE_ANS                ANSELCbits.ANSC7
#define LED_ORANGE_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_ORANGE_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_ORANGE_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_ORANGE_GetValue()           PORTCbits.RC7
#define LED_ORANGE_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_ORANGE_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_ORANGE_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define LED_ORANGE_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define LED_ORANGE_SetPushPull()    do { ODCONCbits.ODC7 = 1; } while(0)
#define LED_ORANGE_SetOpenDrain()   do { ODCONCbits.ODC7 = 0; } while(0)
#define LED_ORANGE_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_ORANGE_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF7 pin functionality
 * @Example
    IOCBF7_ISR();
 */
void IOCBF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF7_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_InterruptHandler);

*/
extern void (*IOCBF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_DefaultInterruptHandler);

*/
void IOCBF7_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF1 pin functionality
 * @Example
    IOCCF1_ISR();
 */
void IOCCF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF1_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_InterruptHandler);

*/
extern void (*IOCCF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);

*/
void IOCCF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF7 pin functionality
 * @Example
    IOCCF7_ISR();
 */
void IOCCF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF7_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF7_SetInterruptHandler() method.
    This handler is called every time the IOCCF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(IOCCF7_InterruptHandler);

*/
extern void (*IOCCF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF7_SetInterruptHandler() method.
    This handler is called every time the IOCCF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(IOCCF7_DefaultInterruptHandler);

*/
void IOCCF7_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/