/*****************************************************************************
 *
 * main.c
 *
 *  Created on: Oct 16, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/

#include "avr/io.h" /* To use the SREG Register */
#include "ultrasonic.h"
#include "lcd.h"

int main(void)
{
	uint16 distance = 0;

	/* Enable Global Interrupt I-Bit */
	SREG |= (1<<7);

	/* Initialize the LCD driver */
	LCD_init();

	/* Initialize the Ultrasonic driver */
	Ultrasonic_init();

	/* Display the distance on LCD screen */
	LCD_displayString("Distance= ");

	while(1)
	{
		/* Read the distance from the Ultrasonic sensor */
		distance = Ultrasonic_readDistance();
		LCD_moveCursor(0, 10);
		LCD_intgerToString(distance);
		LCD_displayString(" cm   ");
	}
}
