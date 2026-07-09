#pragma once
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN 17
#define WIDTH 8
#define HEIGHT 8
#define TOTAL_LEDS 64
#define BRIGHTNESS 50

extern Adafruit_NeoPixel strip;

extern bool board[WIDTH][HEIGHT];
extern uint32_t boardColor[WIDTH][HEIGHT];

int coordToNum(int x, int y);
void drawBoard();