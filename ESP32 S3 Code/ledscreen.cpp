#include "ledscreen.h"

Adafruit_NeoPixel strip(TOTAL_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

bool board[WIDTH][HEIGHT];
uint32_t boardColor[WIDTH][HEIGHT];

int coordToNum(int x, int y){

  if(y == 0) return x;
  if(y == 1) return 8 + (7 - x);
  if(y == 2) return 16 + x;
  if(y == 3) return 24 + (7 - x);
  if(y == 4) return 32 + x;
  if(y == 5) return 40 + (7 - x);
  if(y == 6) return 48 + x;
  if(y == 7) return 56 + (7 - x);

  return 0;
}

void drawBoard(){

  strip.clear();

  for(int y = 0; y < HEIGHT; y++){
    for(int x = 0; x < WIDTH; x++){
      if(board[x][y]){
        strip.setPixelColor(coordToNum(x, y), boardColor[x][y]);
      }
    }
  }

  strip.show();
}
