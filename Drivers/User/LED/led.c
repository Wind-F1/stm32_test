
/*
 *!
 * \file       :led.c
 * \brief      : 
 * \version    : 
 * \date       : 2020/07/08
 * \author     : notrynohigh
 *Last modified by notrynohigh 2020/07/08
 *Copyright (c) 2020 by NOTRYNOHIGH. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "led.h"  
/* \defgroup LED_Private_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Defines
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Macros
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Variables
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_FunctionPrototypes
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Functions
 * \{
 */
   
/**
 * \}
 */
   
/* \addtogroup LED_Exported_Functions
 * \{
 */
 void LED_Control(uint8_t status)
 {
    if(status == LED_ON)
    {
        LED_1_ON();
        LED_2_ON();
        LED_3_ON();
        LED_4_ON();
    }
    else if(status == LED_OFF)
    {
        LED_1_OFF();
        LED_2_OFF();
        LED_3_OFF();
        LED_4_OFF();
    }
}
/**
 * \}
 */
  
/************************ (C) COPYRIGHT NOTRYNOHIGH *****END OF FILE****/

