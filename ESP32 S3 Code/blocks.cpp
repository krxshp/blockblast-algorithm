#include "blocks.h"

Shape shapes[SHAPE_COUNT];

Shape makeSingle(){

  return{1, {{0, 0}}};
}

Shape makeLine2x1(){

  return{2, {{0, 0}, {1, 0}}};
}

Shape makeSquare2x2(){

  return{4, {{0, 0}, {1, 0}, {0, 1}, {1, 1}}};
}

Shape makeLine1x2(){

  return{2, {{0, 0}, {0, 1}}};
}

void blocksStart(){

  shapes[0] = makeSingle();
  shapes[1] = makeLine2x1();
  shapes[2] = makeSquare2x2();
  shapes[3] = makeLine1x2();
}