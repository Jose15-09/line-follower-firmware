/*
 * line_follower.c
 *
 * Created: 3/3/2026 6:35:07 PM
 * Author : josel
 */ 

#include <avr/io.h>
#include "ports.h"
#include "leds.h"
#include "motors.h"

int main(void)
{
    motors_init();
    motor_right(MOTOR_FORWARD,255);
    motor_left(MOTOR_FORWARD,255);
	while (1) 
    {
		
    }
}

