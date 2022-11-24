/**
 * @file KeyToIno.cpp
 * @author Wesley José Santos (binary_quantum@outlook.com)
 * @brief Main cpp file
 * @version 1.0
 * @date 2022-11-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <Arduino.h>
#include "KeyToIno.h"

#define BUFFER_END_CODE 0xFF

enum BufferMap
{
    BUFFER_KEY_ID,
    BUFFER_KEY_STATUS,
    BUFFER_END,
    BUFFER_SIZE,
};

KeyToIno::KeyToIno(Stream &serial)
{
    this->stream = &serial;
}

int KeyToIno::readKeys()
{
    uint8_t buffer[BUFFER_SIZE];
    uint8_t byteIndex;
    uint8_t bitIndex;

    if (this->stream->available() >= BUFFER_SIZE)
    {
        this->stream->readBytesUntil(BUFFER_END_CODE, buffer, sizeof(buffer));

        byteIndex = buffer[BUFFER_KEY_ID] / 8;
        bitIndex = buffer[BUFFER_KEY_ID] % 8;

        buffer[BUFFER_KEY_STATUS]
            ? bitSet(this->keys[byteIndex], bitIndex)
            : bitClear(this->keys[byteIndex], bitIndex);

        return KEY_TO_INO_OK;
    }
    else
    {
        return KEY_TO_INO_NO_DATA;
    }
}

bool KeyToIno::isPressed(Keys key)
{
    uint8_t byteIndex = key / 8;
    uint8_t bitIndex = key % 8;
    return bitRead(this->keys[byteIndex], bitIndex);
}
