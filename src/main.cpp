#include <Arduino.h>
#include <HardwareSerial.h>
#include <KeyToIno.h>

HardwareSerial keyToInoSerial = HardwareSerial(1);
KeyToIno keyboard = KeyToIno(keyToInoSerial);

void setup() {
  // put your setup code here, to run once:
  keyToInoSerial.begin(9600, SERIAL_8N1, 16, 17);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  keyboard.readKeys();

  if(keyboard.isPressed(KEY_A))
  {
    Serial.println("A is pressed");
  }

  if(keyboard.isPressed(KEY_UP))
  {
    Serial.println("UP is pressed");
  }

  if(keyboard.isPressed(KEY_DOWN))
  {
    Serial.println("DOWN is pressed");
  }

  if(keyboard.isPressed(KEY_LEFT))
  {
    Serial.println("LEFT is pressed");
  }

  if(keyboard.isPressed(KEY_RIGHT))
  {
    Serial.println("RIGHT is pressed");
  }
}
