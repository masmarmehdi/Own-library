#include "libmx.h"
static int file_len(const char *file) {
    short f1 = open(file, 0, O_RDONLY);
    int len = 0;
    short sz = 0;
    char buf;
    sz = read(f1, &buf, O_RDONLY);
    while(sz > 0) {
        sz = read(f1, &buf, 1);
        len++;
    }
    return len;
}
char *mx_file_to_str(const char *file) {
    int f1 = open(file, O_RDONLY);
    int sz = 0;
    if (f1 == -1) {
        close(f1);
        return NULL;
    }
    int size = file_len(file);
    if(size == 0)
        return NULL;
    char *newstr = mx_strnew(size);
    sz = read(f1, newstr, size);
    close(f1);
    return newstr;
}
