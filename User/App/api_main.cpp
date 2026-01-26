/**
 * @file api_main.cpp
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


void printLogTask(void *pvParameters)
{
  int count = 0;
  while (true)
  {
    count+=2;
    uart_printf("=== printLogTask thread %d ===\r\n",count);
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}

void blinkTask(void *pvParameters)
{
  while (true)
  {
    // LED 5Hz频率闪烁
    DL_GPIO_togglePins(GPIOB, DL_GPIO_PIN_22);
    vTaskDelay(pdMS_TO_TICKS(500));
  }
}
