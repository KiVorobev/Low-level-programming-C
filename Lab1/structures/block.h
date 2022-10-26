#ifndef LAB1_BLOCK_H
#define LAB1_BLOCK_H

#include <inttypes.h>
#include <stdbool.h>
#include "item.h"

typedef struct {
    size_t bytes
} block_size;

typedef struct {
    struct block *next;
    block_size size;
    bool is_free;
    item items[];
} block;

#endif
