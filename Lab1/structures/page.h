#ifndef LAB1_PAGE_H
#define LAB1_PAGE_H

#include <inttypes.h>
#include "block.h"

typedef struct {
    uint16_t offset_to_start_free_memory;
    uint16_t offset_to_end_free_memory;
} free_memory_offset;

typedef struct {
    uint16_t offset_to_start_busy_memory;
    uint16_t offset_to_end_busy_memory;
} busy_memory_offset;

typedef struct {
    uint32_t number_of_page;
    size_t free_memory;
    free_memory_offset free_memory_offset;
    busy_memory_offset busy_memory_offset;
    block blocks[];
} page_header;

#endif