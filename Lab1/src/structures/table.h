#ifndef LAB1_TABLE_H
#define LAB1_TABLE_H

#include <inttypes.h>
#include "types.h"

typedef struct {
    uint16_t offset_from_start_of_page;
    char* data;
    size_t item_size;
} item;

typedef struct column_of_table {
    char *name;
    enum data_type type;
};

typedef struct table {
    char *name;
    struct column_of_table columns[];
};

#endif
