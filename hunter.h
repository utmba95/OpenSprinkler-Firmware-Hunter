#include <Arduino.h>
#include <vector>
#include "defines.h"

//using namespace std;

// This makes inverting the signal easy
#define HUNTER_ONE LOW
#define HUNTER_ZERO  HIGH

#define START_INTERVAL  900
#define SHORT_INTERVAL  208
#define LONG_INTERVAL 1875

void HunterStop(byte zone);
void HunterStart(byte zone, byte time);
void HunterProgram(byte num);
void HunterBitfield(std::vector <byte>& bits, byte pos, byte val, byte len);
void HunterWrite(std::vector<byte> buffer, bool extrabit);
void HunterLow(void);
void HunterHigh(void);
