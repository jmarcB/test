/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
? [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define D2_TRIS                 TRISAbits.TRISA0
#define D2_LAT                  LATAbits.LATA0
#define D2_PORT                 PORTAbits.RA0
#define D2_WPU                  WPUAbits.WPUA0
#define D2_OD                   ODCONAbits.ODCA0
#define D2_ANS                  ANSELAbits.ANSA0
#define D2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define D2_GetValue()           PORTAbits.RA0
#define D2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define D2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define D2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RA1 aliases
#define D3_TRIS                 TRISAbits.TRISA1
#define D3_LAT                  LATAbits.LATA1
#define D3_PORT                 PORTAbits.RA1
#define D3_WPU                  WPUAbits.WPUA1
#define D3_OD                   ODCONAbits.ODCA1
#define D3_ANS                  ANSELAbits.ANSA1
#define D3_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define D3_GetValue()           PORTAbits.RA1
#define D3_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define D3_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define D3_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_RA2 aliases
#define D4_TRIS                 TRISAbits.TRISA2
#define D4_LAT                  LATAbits.LATA2
#define D4_PORT                 PORTAbits.RA2
#define D4_WPU                  WPUAbits.WPUA2
#define D4_OD                   ODCONAbits.ODCA2
#define D4_ANS                  ANSELAbits.ANSA2
#define D4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define D4_GetValue()           PORTAbits.RA2
#define D4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define D4_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define D4_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA3 aliases
#define D5_TRIS                 TRISAbits.TRISA3
#define D5_LAT                  LATAbits.LATA3
#define D5_PORT                 PORTAbits.RA3
#define D5_WPU                  WPUAbits.WPUA3
#define D5_OD                   ODCONAbits.ODCA3
#define D5_ANS                  ANSELAbits.ANSA3
#define D5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define D5_GetValue()           PORTAbits.RA3
#define D5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define D5_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define D5_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IO_RA4 aliases
#define POT_TRIS                 TRISAbits.TRISA4
#define POT_LAT                  LATAbits.LATA4
#define POT_PORT                 PORTAbits.RA4
#define POT_WPU                  WPUAbits.WPUA4
#define POT_OD                   ODCONAbits.ODCA4
#define POT_ANS                  ANSELAbits.ANSA4
#define POT_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define POT_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define POT_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define POT_GetValue()           PORTAbits.RA4
#define POT_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define POT_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define POT_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define POT_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define POT_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define POT_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define POT_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define POT_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_RA5 aliases
#define BUT_TRIS                 TRISAbits.TRISA5
#define BUT_LAT                  LATAbits.LATA5
#define BUT_PORT                 PORTAbits.RA5
#define BUT_WPU                  WPUAbits.WPUA5
#define BUT_OD                   ODCONAbits.ODCA5
#define BUT_ANS                  ANSELAbits.ANSA5
#define BUT_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define BUT_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define BUT_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define BUT_GetValue()           PORTAbits.RA5
#define BUT_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define BUT_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define BUT_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define BUT_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define BUT_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define BUT_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define BUT_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define BUT_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RA6 aliases
#define IO_RA6_TRIS                 TRISAbits.TRISA6
#define IO_RA6_LAT                  LATAbits.LATA6
#define IO_RA6_PORT                 PORTAbits.RA6
#define IO_RA6_WPU                  WPUAbits.WPUA6
#define IO_RA6_OD                   ODCONAbits.ODCA6
#define IO_RA6_ANS                  ANSELAbits.ANSA6
#define IO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_RA6_GetValue()           PORTAbits.RA6
#define IO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_RA6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define IO_RA6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define IO_RA6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define IO_RA6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define IO_RA6_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define IO_RA6_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set IO_RA7 aliases
#define IO_RA7_TRIS                 TRISAbits.TRISA7
#define IO_RA7_LAT                  LATAbits.LATA7
#define IO_RA7_PORT                 PORTAbits.RA7
#define IO_RA7_WPU                  WPUAbits.WPUA7
#define IO_RA7_OD                   ODCONAbits.ODCA7
#define IO_RA7_ANS                  ANSELAbits.ANSA7
#define IO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_RA7_GetValue()           PORTAbits.RA7
#define IO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_RA7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define IO_RA7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define IO_RA7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define IO_RA7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define IO_RA7_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define IO_RA7_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/