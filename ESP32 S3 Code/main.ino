#include "wifi.h"
#include "ledscreen.h"
#include "blocks.h"

void showRandomShape(){ // purely for hardware testing

  memset(board, 0, sizeof(board));
  memset(boardColor, 0, sizeof(boardColor));

  Shape s = shapes[random(SHAPE_COUNT)];
  int x = 0;
  int y = 0;

  for(int i = 0; i < s.count; i++){

    if(s.c[i].x > x) x = s.c[i].x;
    if(s.c[i].y > y) y = s.c[i].y;
  }

  int randX = random(WIDTH - x);
  int randY = random(HEIGHT - y);

  uint32_t randColor = strip.Color(random(0, 254), random(0, 254), random(0, 254));

  for(int i = 0; i < s.count; i++){

    int x = randX + s.c[i].x;
    int y = randY + s.c[i].y;
    board[x][y] = true;
    boardColor[x][y] = randColor;
  }

  drawBoard();
}

void setup(){

  wifiBegin();
  otaUpload();

  strip.begin();
  strip.setBrightness(BRIGHTNESS);
  strip.clear();
  strip.show();
  blocksStart();
  randomSeed(esp_random());
}

void loop(){

  otaRecurring();
  showRandomShape();
  delay(500);
}