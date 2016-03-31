/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Ismailia Laptop
 */
#include "Types.h"
#include "Conc.h"
#include "util.h"

#include "delay_config.h"
#include "delay_interface.h"
#include "delay_private.h"

#include "DIO_config.h"
#include "DIO_private.h"
#include "DIO_interface.h"
#include "PWM_config.h"
#include "PWM_interface.h"


int main()
{
    u8 brightness;

    // initialize timer0 in PWM mode
    PWM_init();

    // run forever
    while(1)
    {
    	PWM_Set_Duty_Cycle( 64);
    	// increasing brightness
        /*for (brightness = 0; brightness < 255; ++brightness)
        {
            // set the brightness as duty cycle
        	PWM_Set_Duty_Cycle( brightness);

            // delay so as to make the user "see" the change in brightness
        	//delay_voidDelay(1);
        }

        // decreasing brightness
        for (brightness = 255; brightness > 0; --brightness)
        {
            // set the brightness as duty cycle
        	PWM_Set_Duty_Cycle( brightness);

            // delay so as to make the user "see" the change in brightness
           // delay_voidDelay(1);
        }
*/
    // repeat this forever
    }
    return 0;
}
