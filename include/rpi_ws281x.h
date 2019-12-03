/*
** EPITECH PROJECT, 2019
** WS2812
** File description:
** Interface controller code for handling LED strip lightning that utilizes chip WS2812
*/

#ifndef _RPI_WS281X_H_
#define _RPI_WS281X_H_

void ws281xIOSetup(uint8_t pin);
void ws281xIOAdjust(uint8_T r, uint8_T g, uint8_T b, uint8_T w);

#endif /* !_RPI_WS281X_H_ */
