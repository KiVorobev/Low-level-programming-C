#ifndef LAB1_TABLE_H
#define LAB1_TABLE_H

#include <inttypes.h>
#include "types.h"

typedef struct column_of_table {
    char name;
    enum data_type type;
};

typedef struct table{
    char name;
    uint8_t count_of_columns;
    struct column_of_table columns[];
};

#endif
