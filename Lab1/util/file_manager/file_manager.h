#ifndef LAB1_FILE_MANAGER_H
#define LAB1_FILE_MANAGER_H

#include <stdio.h>
#include "../../structures/status.h"

struct maybe_file {
    enum status status;
    FILE *file;
};

struct maybe_file file_open(char *file_name);

enum status file_close(FILE *file);

#endif
