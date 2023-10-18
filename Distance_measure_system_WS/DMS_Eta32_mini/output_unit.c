/*****************************************************************************
 *
 * output_unit.c
 *
 *  Created on: Oct 16, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/

#include "gpio.h"
#include "output_unit.h"

void Output_unit_init(void){
	GPIO_setupPinDirection(BUZZER_PORT_ID, BUZZER_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(RED_PORT_ID, RED_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(GRN_PORT_ID, GRN_PIN_ID, PIN_OUTPUT);
}

void Output_unit_Buzzer_init(void){
	GPIO_setupPinDirection(BUZZER_PORT_ID, BUZZER_PIN_ID, PIN_OUTPUT);
}

void Output_unit_Red_init(void){
	GPIO_setupPinDirection(RED_PORT_ID, RED_PIN_ID, PIN_OUTPUT);
}

void Output_unit_Grn_init(void){
	GPIO_setupPinDirection(GRN_PORT_ID, GRN_PIN_ID, PIN_OUTPUT);
}

void Output_unit_Buzzer_on(void){
	GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_HIGH);
}

void Output_unit_Red_on(void){
	GPIO_writePin(RED_PORT_ID, RED_PIN_ID, LOGIC_HIGH);
}

void Output_unit_Grn_on(void){
	GPIO_writePin(GRN_PORT_ID, GRN_PIN_ID, LOGIC_HIGH);
}
void Output_unit_Buzzer_off(void){
	GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_LOW);
}

void Output_unit_Red_off(void){
	GPIO_writePin(RED_PORT_ID, RED_PIN_ID, LOGIC_LOW);
}

void Output_unit_Grn_off(void){
	GPIO_writePin(GRN_PORT_ID, GRN_PIN_ID, LOGIC_LOW);
}
