#include <Arduino.h>
// Images can be converted to XBM format by using the online converter here:
// https://www.online-utility.org/image/convert/to/XBM

// logo 64x64 pixel array in XBM format
#define logoWidth  64  // logo width
#define logoHeight 64  // logo height

// Image is stored in this array
PROGMEM const unsigned char logo[] = {
  0x00, 0x00, 0x00, 0xFC, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 
  0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x17, 
  0xF2, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xFF, 0x03, 0x00, 
  0x00, 0xE0, 0x1F, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xF8, 0x07, 0x00, 
  0x00, 0xE0, 0x1F, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x80, 0x3F, 0x00, 
  0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x01, 
  0x80, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0xC0, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x03, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x07, 
  0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x07, 0xF0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 
  0xF8, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x78, 0x00, 0x1E, 0x00, 
  0x00, 0x00, 0x00, 0x1E, 0x7C, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x3E, 
  0x3C, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3E, 0x00, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0x7C, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x7C, 
  0x1E, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1E, 0xFC, 0xFF, 0x07, 
  0xE0, 0xFF, 0x3F, 0x78, 0x1F, 0xFC, 0xFF, 0x07, 0xE0, 0xFF, 0x3F, 0xF8, 
  0x1F, 0xFC, 0xFF, 0x0F, 0xF0, 0xFF, 0x3F, 0xF8, 0x1E, 0xFC, 0xFF, 0x07, 
  0xE0, 0xFF, 0x3F, 0xF8, 0x0F, 0xB8, 0x9F, 0x02, 0x80, 0xBE, 0x17, 0xF0, 
  0x0F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0x0F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x78, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  0x1E, 0x40, 0x00, 0x78, 0x1C, 0x00, 0x02, 0x78, 0x3E, 0x40, 0x00, 0xFE, 
  0x7F, 0x00, 0x02, 0x7C, 0x3E, 0xC0, 0x00, 0xFF, 0xFF, 0x00, 0x03, 0x7C, 
  0x3C, 0xC0, 0x80, 0xFF, 0xFF, 0x01, 0x07, 0x3C, 0x7C, 0xE0, 0xC3, 0xFF, 
  0xFF, 0xC7, 0x03, 0x3E, 0x78, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x3E, 
  0xF8, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x1F, 0xF8, 0xC0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x03, 0x0F, 0xF0, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x0F, 
  0xE0, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0x07, 0xE0, 0x07, 0xFF, 0x7F, 
  0xFE, 0xFF, 0xE0, 0x07, 0xC0, 0x07, 0xFC, 0x3F, 0xFC, 0x3F, 0xE0, 0x03, 
  0x80, 0x0F, 0xF8, 0x0F, 0xF0, 0x1F, 0xF0, 0x01, 0x80, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x01, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 
  0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0xFC, 0x01, 0x00, 
  0x00, 0x80, 0x3F, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xE0, 0x1F, 0x00, 
  0x00, 0xE0, 0x1F, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xC0, 0xFF, 0x00, 
  0x00, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xFF, 0x17, 0xF8, 0xFF, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0x3F, 0x00, 0x00, 0x00, };