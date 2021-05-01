/*
 * CA.h
 *
 *  Created on: May 1, 2021
 *      Author: TahaOmar
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"
//define states
enum {
	CA_waiting,
	CA_driving
}CA_state_id;

//declare states functiones CA
STATE_define(CA_waiting);
STATE_define(CA_driving);

//STATE pointer (is a pointer to function)
extern void (*CA_state)();



#endif /* CA_H_ */
