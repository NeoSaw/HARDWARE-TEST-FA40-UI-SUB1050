/*
© [2025] Microchip Technology Inc. and its subsidiaries.

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

#include <xc.h>
#include "../tmr1.h"
#include "../../../main.h"

// Set the TMR1 module to the options selected in the user interface.
void TMR1_Initialize(void) {
    // TCKPS 1:8; nTSYNC synchronize; TRD16 disabled; TMRON enabled; 
    T1CON = 0x31;
    // TMRGE disabled; TGPOL low; TGTM disabled; TGSPM disabled; TGGO done; 
    T1GCON = 0x0;
    // TGSS T1G_pin; 
    T1GATE = 0x0;
    // TMRCS FOSC/4; 
    T1CLK = 0x1;
    // TMRH 224; 
    TMR1H = 0xFC;
    // TMRL 191; 
    TMR1L = 0x17;
    
    // Enable Timer1 interrupt
    PIE4bits.TMR1IE = 1;
    
    // Clear the interrupt flag
    PIR4bits.TMR1IF = 0;
}


void TMR1_ISR(void)
{
    // Clear the TMR1 interrupt flag
    PIR4bits.TMR1IF = 0;
    
    // Reset TMR1 for next 1ms interval
    TMR1H = 0xFC;  
    TMR1L = 0x17;
    
    // Set the flag to indicate a 1ms timer event
    flagMAIN1mSTimer = TRUE;
}