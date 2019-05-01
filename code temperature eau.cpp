#include <OneWire.h>
#include <DallasTemperature.h>

#include <Wire.h>
#include <LiquidCrrystal_I2C.h>

// .........................................//

#define ONE_WIRE_BUS 6
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensor(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(void) {

  lcd.init ();
  lcd.backlight();

}

void loop () {

  sensors.requestTemperatures();
  float x=sensors.getTempCByIndex(0);

  lcd.setCursor(0, 0);
  lcd.print("Domotique a 2 e");

  lcd.setCursor(0, 1);
  lcd.print("T1")

  lcd.setCursor(9, 1);
  lcd.print(x);
}