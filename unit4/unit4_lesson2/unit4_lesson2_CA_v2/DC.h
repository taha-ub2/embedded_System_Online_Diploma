/*
 * DC.h
 *
 *  Created on: Jul 29, 2021
 *      Author: TahaOmar
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"

//define states
enum
{
	dc_idle,
	dc_busy
}DC_state_id;


//functions prototypes
STATE_DEFINE(DC_idle);
STATE_DEFINE(DC_busy);

void DC_init();


//global pointer to function
extern void (*DC_state)();




#endif /* DC_H_ */
