
/*
 *!
 * \file       : led.h
 * \brief      : 
 * \version    : 
 * \date       : 2020/07/08
 * \author     : notrynohigh
 * Last modified by notrynohigh 2020/07/08
 * Copyright (c) 2020 by NOTRYNOHIGH. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "main.h"
/* \defgroup LED_Exported_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Exported_Defines
 * \{
 */
 #define LED_ON             0
 #define LED_OFF            1
 
 #define LED_1_ON()          HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin, GPIO_PIN_RESET)
 #define LED_2_ON()          HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin, GPIO_PIN_RESET)
 #define LED_3_ON()          HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin, GPIO_PIN_RESET)
 #define LED_4_ON()          HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin, GPIO_PIN_RESET)
 
 #define LED_1_OFF()         HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin, GPIO_PIN_SET)
 #define LED_2_OFF()         HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin, GPIO_PIN_SET)
 #define LED_3_OFF()         HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin, GPIO_PIN_SET)
 #define LED_4_OFF()         HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin, GPIO_PIN_SET)
 
 
 
/**
 * \}
 */
   
/* \defgroup LED_Exported_Macros
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Exported_Variables
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Exported_Functions
 * \{
 */
void LED_Control(uint8_t status);   
/**
 * \}
 */
  
/************************ (C) COPYRIGHT NOTRYNOHIGH *****END OF FILE****/

