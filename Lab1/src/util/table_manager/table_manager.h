#ifndef LAB1_TABLE_MANAGER_H
#define LAB1_TABLE_MANAGER_H

#include "../../structures/table.h"

struct table create_table(char name);

void add_column_to_table(struct table table, struct column_of_table column);

#endif
