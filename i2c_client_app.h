/* 
 * File:   i2c_client_app.h
 * Author: robert.hoehne
 *
 * Created on February 28, 2025, 9:59 AM
 */

#ifndef I2C_CLIENT_APP_H
#define	I2C_CLIENT_APP_H

#include <xc.h>
#include <stdbool.h>
#include "mcc_generated_files/i2c_client/i2c_client_types.h"

//Private functions
bool Client_Application(i2c_client_transfer_event_t event);
void InitializeI2CRegisters(void);

void ProcessLEDRegisterUpdate(uint8_t regAddress);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* I2C_CLIENT_APP_H */

