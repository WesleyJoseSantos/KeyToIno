/**
 * @file simple.ino
 * @author Wesley José Santos (binary_quantum@outlook.com)
 * @brief Use keyboard 'Q', 'W' and 'B' keys to control ardino led status
 * @version 1.0
 * @date 2022-11-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <KeyToIno.h>

#define KEY_ON KEY_Q
#define KEY_OFF KEY_W
#define KEY_BLINK KEY_B
#define BLINK_INTERVAL 200

KeyToIno keyboard = KeyToIno(Serial);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  keyboard.readKeys();

  if (keyboard.isPressed(KEY_ON))
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }

  if (keyboard.isPressed(KEY_OFF))
  {
    digitalWrite(LED_BUILTIN, LOW);
  }

  if (keyboard.isPressed(KEY_BLINK))
  {
    static unsigned long blink_timer = 0;
    if (millis() > blink_timer)
    {
      digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
      blink_timer = millis() + BLINK_INTERVAL;
    }
  }

}