/*
 * LED_Delay.c
 *
 * Created: 1/15/2022 8:47:31 PM
 * Author : Abdelrhman Elsawy
 */ 

#include "../MCAL/TIMER0/TIMER0.h"
#include "../ECUAL/LED/LED.h"

LED_t led1 = {PORTB,PIN4} ;
	
int main(void)
{
	LED_u8Init(led1);
    /* Replace with your application code */
    while (1) 
    {
		LED_u8Off(led1);
		TIMER0_u8PollingDelay_ms(300);
		LED_u8On(led1);
		TIMER0_u8PollingDelay_ms(500);
    }
}

