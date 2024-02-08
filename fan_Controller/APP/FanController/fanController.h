/*
 ==================================================================
 Name        : fanController.h
 Author      : Mohamed Belal
 Created on  : 7/2/2024
 Description : fan controller application to controll motor speed acording to temperature value
 ==================================================================
 */

#ifndef FANCONTROLLER_H_
#define FANCONTROLLER_H_

#include "./../../MCAL/Timer/Timer.h"
#include "./../../MCAL/ADC/ADC.h"
#include "./../../HAL/lcd_driver.h"
#include "./../../MCAL/DIO.h"

void fanController_app(void);

#endif /* FANCONTROLLER_H_ */