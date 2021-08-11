#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "p_alarm.h"
#include "p_sensor.h"


int main ()
{
	int p_val,threshold=20;
	GPIO_INITIALIZATION();
	while (1)
	{
		p_val= read_sensor();
		if(p_val>=threshold)
		{
		    alarm_turn_on();
		    Delay(400000);
		    alarm_turn_off();
        
		}
		else 
		{   
			Delay(400000);
			alarm_turn_off();
		}
		//Delay(2000);
	}

}
