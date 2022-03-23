////////////////////////////////////////////////////////
////// Multi-env platformio.ini example ////////////////
////////////////////////////////////////////////////////
//////
////// example to switch four displays without
////// rewrite a single line of code
//////
////// best to use on 
////// ESP32-DevKitC-Multimedia-Board by Ziotester Lab
//////
////// Info, guides and tutorials on:
////// https://ziotester.github.io
//////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

#include <Arduino.h>
#include "logo.h"             // Sketch tab header for xbm images

#include <TFT_eSPI.h>        // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();   // Invoke library


void setup()
{
  tft.begin();               // Initialise the display
  tft.setRotation(MMB_ROTATION);
  tft.fillScreen(TFT_WHITE); // Black screen fill
  ledcAttachPin(TFT_BL, 1);      // assign TFT_BL pin to channel 1
  ledcSetup(1, 12000, 8);        // 12 kHz PWM, 8-bit resolution
  ledcWrite(1, TFT_BRIGHTNESS);  // brightness 0 - 255
}

void loop()
{

  // Example 1
  // =========
  // Random x and y coordinates
  int x = random(tft.width()  - logoWidth);
  int y = random(tft.height() - logoHeight);

  // Draw bitmap with top left corner at x,y with foreground only color
  // Bits set to 1 plot as the defined color, bits set to 0 are not plotted
  //              x  y  xbm   xbm width  xbm height  color
  tft.drawXBitmap(x, y, logo, logoWidth, logoHeight, TFT_RED);

  delay(2000);

  // Erase old one by drawing over with background colour
  tft.drawXBitmap(x, y, logo, logoWidth, logoHeight, TFT_WHITE);


  // Example 2
  // =========
  // New random x and y coordinates
  x = random(tft.width()  - logoWidth);
  y = random(tft.height() - logoHeight);

  // Draw bitmap with top left corner at x,y with foreground and background colors
  // Bits set to 1 plot as the defined fg color, bits set to 0 are plotted as bg color
  //              x  y  xbm   xbm width  xbm height  fg color   bg color
  tft.drawXBitmap(x, y, logo, logoWidth, logoHeight, TFT_WHITE, TFT_RED);

  delay(2000);

  // Erase old one by drawing over with background colour
  tft.drawXBitmap(x, y, logo, logoWidth, logoHeight, TFT_WHITE, TFT_WHITE);

}