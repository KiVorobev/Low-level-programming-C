#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H

#include <inttypes.h>

typedef struct {
    uint16_t offset_from_start_of_page;
    size_t item_size;
} item;

#endif