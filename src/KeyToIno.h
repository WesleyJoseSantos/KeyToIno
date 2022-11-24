/**
 * @file KeyToIno.h
 * @author Wesley José Santos (binary_quantum@outlook.com)
 * @brief Main header file
 * @version 1.0
 * @date 2022-11-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __KEYTOINO__H__
#define __KEYTOINO__H__

#include <Stream.h>
#include <inttypes.h>

/**
 * @brief Keys enumeration
 * 
 */
enum Keys
{
    KEY_NONE = 0x0,
    KEY_L_BUTTON = 0x1,
    KEY_R_BUTTON = 0x2,
    KEY_CANCEL = 0x3,
    KEY_M_BUTTON = 0x4,
    KEY_X_BUTTON1 = 0x5,
    KEY_X_BUTTON2 = 0x6,
    KEY_BACK = 0x8,
    KEY_TAB = 0x9,
    KEY_LINE_FEED = 0xA,
    KEY_CLEAR = 0xC,
    KEY_RETURN = 0xD,
    KEY_ENTER = 0xD,
    KEY_SHIFT_KEY = 0x10,
    KEY_CONTROL_KEY = 0x11,
    KEY_MENU = 0x12,
    KEY_PAUSE = 0x13,
    KEY_CAPITAL = 0x14,
    KEY_CAPS_LOCK = 0x14,
    KEY_KANA_MODE = 0x15,
    KEY_HANGUEL_MODE = 0x15,
    KEY_HANGUL_MODE = 0x15,
    KEY_JUNJA_MODE = 0x17,
    KEY_FINAL_MODE = 0x18,
    KEY_HANJA_MODE = 0x19,
    KEY_KANJI_MODE = 0x19,
    KEY_ESCAPE = 0x1B,
    KEY_IME_CONVERT = 0x1C,
    KEY_IME_NONCONVERT = 0x1D,
    KEY_IME_ACCEPT = 0x1E,
    KEY_IME_ACEEPT = 0x1E,
    KEY_IME_MODE_CHANGE = 0x1F,
    KEY_SPACE = 0x20,
    KEY_PRIOR = 0x21,
    KEY_PAGE_UP = 0x21,
    KEY_NEXT = 0x22,
    KEY_PAGE_DOWN = 0x22,
    KEY_END = 0x23,
    KEY_HOME = 0x24,
    KEY_LEFT = 0x25,
    KEY_UP = 0x26,
    KEY_RIGHT = 0x27,
    KEY_DOWN = 0x28,
    KEY_SELECT = 0x29,
    KEY_PRINT = 0x2A,
    KEY_EXECUTE = 0x2B,
    KEY_SNAPSHOT = 0x2C,
    KEY_PRINT_SCREEN = 0x2C,
    KEY_INSERT = 0x2D,
    KEY_DELETE = 0x2E,
    KEY_HELP = 0x2F,
    KEY_D0 = 0x30,
    KEY_D1 = 0x31,
    KEY_D2 = 0x32,
    KEY_D3 = 0x33,
    KEY_D4 = 0x34,
    KEY_D5 = 0x35,
    KEY_D6 = 0x36,
    KEY_D7 = 0x37,
    KEY_D8 = 0x38,
    KEY_D9 = 0x39,
    KEY_A = 0x41,
    KEY_B = 0x42,
    KEY_C = 0x43,
    KEY_D = 0x44,
    KEY_E = 0x45,
    KEY_F = 0x46,
    KEY_G = 0x47,
    KEY_H = 0x48,
    KEY_I = 0x49,
    KEY_J = 0x4A,
    KEY_K = 0x4B,
    KEY_L = 0x4C,
    KEY_M = 0x4D,
    KEY_N = 0x4E,
    KEY_O = 0x4F,
    KEY_P = 0x50,
    KEY_Q = 0x51,
    KEY_R = 0x52,
    KEY_S = 0x53,
    KEY_T = 0x54,
    KEY_U = 0x55,
    KEY_V = 0x56,
    KEY_W = 0x57,
    KEY_X = 0x58,
    KEY_Y = 0x59,
    KEY_Z = 0x5A,
    KEY_L_WIN = 0x5B,
    KEY_R_WIN = 0x5C,
    KEY_APPS = 0x5D,
    KEY_SLEEP = 0x5F,
    KEY_NUM_PAD0 = 0x60,
    KEY_NUM_PAD1 = 0x61,
    KEY_NUM_PAD2 = 0x62,
    KEY_NUM_PAD3 = 0x63,
    KEY_NUM_PAD4 = 0x64,
    KEY_NUM_PAD5 = 0x65,
    KEY_NUM_PAD6 = 0x66,
    KEY_NUM_PAD7 = 0x67,
    KEY_NUM_PAD8 = 0x68,
    KEY_NUM_PAD9 = 0x69,
    KEY_MULTIPLY = 0x6A,
    KEY_ADD = 0x6B,
    KEY_SEPARATOR = 0x6C,
    KEY_SUBTRACT = 0x6D,
    KEY_DECIMAL = 0x6E,
    KEY_DIVIDE = 0x6F,
    KEY_F1 = 0x70,
    KEY_F2 = 0x71,
    KEY_F3 = 0x72,
    KEY_F4 = 0x73,
    KEY_F5 = 0x74,
    KEY_F6 = 0x75,
    KEY_F7 = 0x76,
    KEY_F8 = 0x77,
    KEY_F9 = 0x78,
    KEY_F10 = 0x79,
    KEY_F11 = 0x7A,
    KEY_F12 = 0x7B,
    KEY_F13 = 0x7C,
    KEY_F14 = 0x7D,
    KEY_F15 = 0x7E,
    KEY_F16 = 0x7F,
    KEY_F17 = 0x80,
    KEY_F18 = 0x81,
    KEY_F19 = 0x82,
    KEY_F20 = 0x83,
    KEY_F21 = 0x84,
    KEY_F22 = 0x85,
    KEY_F23 = 0x86,
    KEY_F24 = 0x87,
    KEY_NUM_LOCK = 0x90,
    KEY_SCROLL = 0x91,
    KEY_L_SHIFT_KEY = 0xA0,
    KEY_R_SHIFT_KEY = 0xA1,
    KEY_L_CONTROL_KEY = 0xA2,
    KEY_R_CONTROL_KEY = 0xA3,
    KEY_L_MENU = 0xA4,
    KEY_R_MENU = 0xA5,
    KEY_BROWSER_BACK = 0xA6,
    KEY_BROWSER_FORWARD = 0xA7,
    KEY_BROWSER_REFRESH = 0xA8,
    KEY_BROWSER_STOP = 0xA9,
    KEY_BROWSER_SEARCH = 0xAA,
    KEY_BROWSER_FAVORITES = 0xAB,
    KEY_BROWSER_HOME = 0xAC,
    KEY_VOLUME_MUTE = 0xAD,
    KEY_VOLUME_DOWN = 0xAE,
    KEY_VOLUME_UP = 0xAF,
    KEY_MEDIA_NEXT_TRACK = 0xB0,
    KEY_MEDIA_PREVIOUS_TRACK = 0xB1,
    KEY_MEDIA_STOP = 0xB2,
    KEY_MEDIA_PLAY_PAUSE = 0xB3,
    KEY_LAUNCH_MAIL = 0xB4,
    KEY_SELECT_MEDIA = 0xB5,
    KEY_LAUNCH_APPLICATION1 = 0xB6,
    KEY_LAUNCH_APPLICATION2 = 0xB7,
    KEY_OEM_SEMICOLON = 0xBA,
    KEY_OEM1 = 0xBA,
    KEY_OEMPLUS = 0xBB,
    KEY_OEMCOMMA = 0xBC,
    KEY_OEM_MINUS = 0xBD,
    KEY_OEM_PERIOD = 0xBE,
    KEY_OEM_QUESTION = 0xBF,
    KEY_OEM2 = 0xBF,
    KEY_OEMTILDE = 0xC0,
    KEY_OEM3 = 0xC0,
    KEY_OEM_OPEN_BRACKETS = 0xDB,
    KEY_OEM4 = 0xDB,
    KEY_OEM_PIPE = 0xDC,
    KEY_OEM5 = 0xDC,
    KEY_OEM_CLOSE_BRACKETS = 0xDD,
    KEY_OEM6 = 0xDD,
    KEY_OEM_QUOTES = 0xDE,
    KEY_OEM7 = 0xDE,
    KEY_OEM8 = 0xDF,
    KEY_OEM_BACKSLASH = 0xE2,
    KEY_OEM102 = 0xE2,
    KEY_PROCESS_KEY = 0xE5,
    KEY_PACKET = 0xE7,
    KEY_ATTN = 0xF6,
    KEY_CRSEL = 0xF7,
    KEY_EXSEL = 0xF8,
    KEY_ERASE_EOF = 0xF9,
    KEY_PLAY = 0xFA,
    KEY_ZOOM = 0xFB,
    KEY_NO_NAME = 0xFC,
    KEY_PA1 = 0xFD,
    KEY_OEM_CLEAR = 0xFE,
};

/**
 * @brief KeyToIno error codes
 * 
 */
enum KeyToInoError
{
    KEY_TO_INO_OK,       //!< No error
    KEY_TO_INO_NO_DATA   //!< No data received
};

/**
 * @brief KeyToIno main class
 * 
 */
class KeyToIno
{
private:
    uint8_t keys[32];
    Stream *stream;
public:

    /**
     * @brief Construct a new Key To Ino object
     * 
     * @param serial Serial port to be used for communication
     */
    KeyToIno(Stream &serial);

    /**
     * @brief Read keyboard keys from KeyToInoApp
     * 
     * @return KeyToInoError
     */
    int readKeys();

    /**
     * @brief Check if a key is pressed
     * 
     * @param key Key to be checked
     * @return true if key is pressed
     * @return false if key is not pressed
     */
    bool isPressed(Keys key);
};

#endif  //!__KEYTOINO__H__