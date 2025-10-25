#ifndef clox_chunk_h
#define clox_chunk_h

#include "Value.h"
#include "Common.h"
#include <cstdint>

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    uint8_t* code;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
int addConstant(Chunk* chunk, Value value);

#endif