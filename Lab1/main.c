#include <stdio.h>
#include <stdlib.h>
#include "util/file_manager/file_manager.h"
#include "util/status_manager/status_manager.h"

int main(int argc, char **argv) {
    if (argc == 0) {
        perror("Filepath is not defined. Pass it and try again, please.\n");
        return 0;
    }
    struct maybe_file file = file_open(argv[0]);

    if (file.status != OK) {
        print_status(OPEN_ERROR);
        abort();
    }

    // some actions

    if (file_close(file.file) != OK) {
        print_status(CLOSE_ERROR);
        abort();
    }
    print_status(OK);
    return 0;
}
