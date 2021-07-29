/*
 * main.c
 *
 *  Created on: May 1, 2021
 *      Author: TahaOmar
 */
#include "CA.h"

void setup ()
{
	//init all drivers
	//init IRQ
	//init HAL
	//init block
	//set state pointer for each block
	CA_state = STATE(CA_waiting);
}

void main ()
{

	while(1)
	{
		//call state for each block
		CA_state();
	}


}
