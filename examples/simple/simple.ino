/**
 * @file simple.ino
 * @author Wesley José Santos (binary_quantum@outlook.com)
 * @brief Use keyboard 'Q' and 'W' keys to control ardino led status
 * @version 1.0
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <KeyToIno.h>

#define KEY_ON KEY_Q
#define KEY_OFF KEY_W

KeyToIno keyboard = KeyToIno(Serial);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  int err = keyboard.readKeys();

  if(err == KEY_TO_INO_OK)
  {
    if(keyboard.isPressed(KEY_ON))
    {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    
    if(keyboard.isPressed(KEY_OFF))
    {
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
