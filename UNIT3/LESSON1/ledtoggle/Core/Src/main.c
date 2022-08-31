/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stdint.h"
//register address
typedef volatile unsigned int vuint32_t;
#define RCC_BASE1    0x40021000
#define GPIOA_BASE1  0x40010800
#define RCC_APB2ENR *(volatile uint32_t*)(RCC_BASE1+0x18)
#define GPIO_CRH *(volatile uint32_t*)(GPIOA_BASE1+0x04)
#define GPIO_ODR *(volatile uint32_t*)(GPIO_BASE+0x0c)
typedef union
{
	vuint32_t all_fields;
	struct
	{
		vuint32_t reserved:12;
		vuint32_t pin13:1;
	}pin;
}R_ODR_t;
volatile R_ODR_t* R_ODR=(volatile R_ODR_t*)(GPIOA_BASE1+0x0c);
int main (void)
{
	RCC_APB2ENR|=(1<<2);
	GPIO_CRH&=(0Xff0fffff);
	GPIO_CRH&=(0x00200000);
	while(1)
	{
		R_ODR->pin.pin13=1;
		for(int i=0;i<5000;i++);
		R_ODR->pin.pin13=0;
		for(int i=0;i<5000;i++);
	}
		return 0;
}


