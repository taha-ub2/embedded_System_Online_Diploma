/*
 * CA.c
 *
 *  Created on: May 1, 2021
 *      Author: TahaOmar
 */
#include "CA.h"
//variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

//STATE pointer (is a pointer to function)
void (*CA_state)();
int US_get_distance_random (int l,int r, int count);

STATE_define (CA_waiting)
{
	//state_name
	CA_state_id = CA_waiting ;
	//satte_Action
	CA_speed = 0;
	//DC_motor(speed=0)

	//Event_Check
	// get distance from reading ultrasonic sensor value
	CA_distance = US_get_distance_random(45,55,1);
	(CA_distance <= CA_threshold)? (CA_state = STATE(CA_waiting)):(CA_state = STATE(CA_driving));
	printf("CA_waiting state distance=%d speed =%d",CA_distance, CA_speed);
}
STATE_define (CA_driving)
{
	//state_name
	CA_state_id = CA_driving ;
	//satte_Action
	CA_speed = 30;
	//DC_motor(speed=0)

	//Event_Check
	// get distance from reading ultrasonic sensor value
	CA_distance = US_get_distance_random(45,55,1);
	(CA_distance > CA_threshold)? (CA_state = STATE(CA_driving)):(CA_state = STATE(CA_waiting));
	printf("CA_driving state distance=%d speed =%d",CA_distance, CA_speed);

}
int US_get_distance_random (int l, int r, int count)
{
	 int i;
	 for(i=0;i<=count;i++){
		 int rand_num = (rand()%(r-l+1))+1;
		 return rand_num;
	 }

}
