/* 
 * File:   parameters.h
 * Author: Robert
 *
 * Created on 1 March 2025, 6:29 PM
 */

#ifndef PARAMETERS_H
#define	PARAMETERS_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifndef EEROM_H

	#define EEROM_H

	#include "definitions.h"

	#define EE_POLL_WRITE_TIME		10U

	/*** Function Prototypes ***/
	void EEReadParameters( void );
	void EEPollWriteParameters( void );


#endif




#ifdef	__cplusplus
}
#endif

#endif	/* PARAMETERS_H */

