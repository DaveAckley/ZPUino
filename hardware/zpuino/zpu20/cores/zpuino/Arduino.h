#ifndef __ARDUINO_H__
#define __ARDUINO_H__

#include <zpuino.h>
#include <delay.h>
#include <HardwareSerial.h>
#include <binary.h>

#include <Random.h>

#ifndef  boolean
#define boolean bool
#endif

#ifndef _BV
#define _BV(x) (1<<(x))
#endif

#define HIGH 0x1
#define LOW  0x0

#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

#define true 0x1
#define false 0x0

/* Used with shiftOut, e.g. */
#define LSBFIRST 0
#define MSBFIRST 1

/* Used with attachInterrupt, e.g. */
#define CHANGE 1
#define FALLING 2
#define RISING 3

/* Arduino 'Bits and Bytes' API */
#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))


#endif
