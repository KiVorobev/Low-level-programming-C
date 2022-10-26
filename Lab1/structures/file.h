#ifndef LAB1_FILE_H
#define LAB1_FILE_H

#include <inttypes.h>

typedef struct {
    uint16_t offset_to_start_content;
    uint16_t offset_to_end_content;
} content_offset;

typedef struct {
    uint32_t page_count;
    content_offset content_offset;
    size_t busy_memory_of_file;
} file_header;

#endif
