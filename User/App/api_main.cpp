/**
 * @file Api_main.cpp
 * @author Rh
 * @brief 主要用于freertos的任务定义以及c风格声明
 * @version 0.1
 * @date 2026-01-24
 *
 * @note 在C++中使用FreeRTOS的Task函数时
 *       需要将任务函数声明为extern "C"格式
 *       同时函数参数必须是void *pvParameters。
 *       所以，我直接把任务放到一个转接文件，然后extern "C" 再在主函数调用就没问题了
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include "ti_msp_dl_config.h"

#include "api_main.h"
#include "bsp_usart.hpp"

#include "FreeRTOS.h"
#include "task.h"


void printLogTask()
{
  while (true)
  {
    uart_printf("=== printLogTask thread ===\r\n");
    uart_printf("Free heap memory left: %d bytes\r\n", xPortGetFreeHeapSize());
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}

void blinkTask()
{
  while (true)
  {
    // LED 5Hz频率闪烁
    DL_GPIO_togglePins(PORTA_PORT, PORTA_LED_USER_PIN);
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}