#include "table_manager.h"

struct table create_table(char name) {
    return (struct table) {.name = name};
}

void add_column_to_table(struct table table, struct column_of_table column) {
    table.columns[table.count_of_columns++] = column;
}