/*
 * US.h
 *
 *  Created on: Jul 29, 2021
 *      Author: TahaOmar
 */

#ifndef US_H_
#define US_H_

#include "state.h"

//define states
enum
{
	us_busy
}US_state_id;


//functions prototypes
STATE_DEFINE(US_busy);

void US_init();

//global pointer to function
extern void (*US_state)();



#endif /* US_H_ */
