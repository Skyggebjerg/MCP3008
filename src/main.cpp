#include <Arduino.h>
#include <M5Core2.h>
#include <Adafruit_MCP3008.h>

Adafruit_MCP3008 adc;

int count = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("MCP3008 simple test.");

  // MCP3008 PIN 10 (CS) connected to Core2 PIN G27
  // MCP3008 PIN 11 (DIN) connected to Core2 PIN G23 (MOSI)
  // MCP3008 PIN 12 (DOUT) connected to Core2 PIN G38 (MISO)
  // MCP3008 PIN 13 (CLK) connected to Core2 PIN G18 (SCK)
  
  // Hardware SPI (specify CS, use any available digital)
  // Can use defaults if available, ex: UNO (SS=10) or Huzzah (SS=15)


  //adc.begin();
  // Feather 32u4 (SS=17) or M0 (SS=16), defaults SS not broken out, must specify
  //adc.begin(10);  
adc.begin(27); // CS on GPIO 27
  // Software SPI (specify all, use any available digital)
  // (sck, mosi, miso, cs);
  //adc.begin(13, 11, 12, 10);
}

void loop() {
  //for (int chan=0; chan<8; chan++) {
    Serial.println(adc.readADC(0)); //Serial.print("\t");
  //}

  //Serial.print("["); Serial.print(count); Serial.println("]");
  //count++;
  
  delay(10);
}