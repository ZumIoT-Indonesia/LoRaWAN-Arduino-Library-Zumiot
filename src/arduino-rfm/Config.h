//Uncomment for debug 
//#define DEBUG

// LoRaWAN freq band
#define AS_923
#define DUAL_SPI


//make it for ESP32
#ifdef ESP32
#include <SPI.h>
  extern SPIClass SPIH;
#endif
