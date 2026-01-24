/**
 * @file bsp_usart.cpp
 * @author pre & Rh
 * @brief 开源这个工程的人写的串口发送，应该没啥问题，但是看着是阻塞
 * @version 0.1
 * @date 2026-01-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "bsp_usart.h"
#include "ti_msp_dl_config.h"
#include "ti/driverlib/dl_uart.h"
#include <stdio.h>
#include <stdarg.h>

int uart_printf(const char *fmt, ...)
{
  static char buf[128];
  uint32_t    i, len;
  va_list     args;
  va_start(args, fmt);
  len = vsnprintf((char *)buf, sizeof(buf), (char *)fmt, args);
  va_end(args);
  i = 0;
  while (i < len)
  {
    DL_UART_transmitData(UART0_INST, buf[i]);
    // 等待FIFO清空再输出
    while (!DL_UART_isTXFIFOEmpty(UART0))
      ;
    i++;
  }
  return len;
}
