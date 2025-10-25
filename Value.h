#ifndef clox_value_h
#define clox_value_h
#include "Common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
}ValueArray;

void initValueArrary(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);

#endif