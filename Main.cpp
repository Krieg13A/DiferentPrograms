#include "Common.h"
#include "Chunk.h"
#include "debug.h"

int main (int argc, const char* argv[]){
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disaassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}