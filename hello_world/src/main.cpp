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
#include <SPI.h>
#include <TFT_eSPI.h> // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();       // Invoke custom library

void setup(void) {
  tft.init();
  tft.setRotation(MMB_ROTATION);
}

void loop() {  
  // Fill screen with random colour so we can see the effect of printing with and without 
  // a background colour defined
  tft.fillScreen(random(0xFFFF));
  
  // Set "cursor" at top left corner of display (0,0) and select font 2
  // (cursor will move to next line automatically during printing with 'tft.println'
  //  or stay on the line is there is room for the text with tft.print)
  tft.setCursor(0, 0, 2);
  
  // Set the font colour to be white with a black background, set text size multiplier to 2
  tft.setTextColor(TFT_BLACK, TFT_WHITE);  
  tft.setTextSize(2);
  // We can now plot text on screen using the "print" class
  tft.println("platformio.ini");  

  tft.setTextSize(1);
  // Set the font colour to be red with black background, set to font 4
  tft.setTextColor(TFT_RED,TFT_BLACK);    
  tft.setTextFont(4);
  tft.println("multi-env example");
  tft.println("by ZioTester Lab.");

  // Set the font colour to be green with black background, set to font 4
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  // Change to font 2
  tft.setTextFont(2);
  tft.println();
  // This next line is deliberately made too long for the display width to test
  // automatic text wrapping onto the next line
  tft.println("This example was written to demonstrate multi environments on platformio.ini. Best to use on ESP32-DevKitC-Multimedia-Board by Ziotester Lab");
  tft.println();
  tft.println(F("Info, guides and tutorials on:")); // Can store strings in FLASH to save RAM
  tft.println(F("https://ziotester.github.io"));  
  
  // stop for 10 seconds and repeat again
  delay(10000);
}
