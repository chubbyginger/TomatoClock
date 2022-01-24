/*
 * SSD1306 driver header for u8g2.
 * Reference: https://blog.csdn.net/weixin_44099973/article/details/107046348
 */
#ifndef __OLED_INIT_H
#define __OLED_INIT_H

#include "u8g2.h"
#include "main.h"

#define OLED_ADDRESS 0x78
uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
extern uint8_t u8x8_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
extern void u8g2Init(u8g2_t *u8g2);
extern I2C_HandleTypeDef hi2c1;
#endif // __OLED_INIT_H
