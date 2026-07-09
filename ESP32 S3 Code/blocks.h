#pragma once
#include <Arduino.h>

#define SHAPE_COUNT 4

struct Cell{

  int8_t x;
  int8_t y;
};

struct Shape{

  uint8_t count;
  Cell c[9];
};

extern Shape shapes[SHAPE_COUNT];

Shape makeSingle();
Shape makeLine2x1();
Shape makeSquare2x2();
Shape makeLine1x2();

void blocksStart();