#include "libmx.h"

char *mx_strdup(const char *str) {
    char *dst;
    int size = mx_strlen(str);
    dst = mx_strnew(size);
    mx_strcpy(dst, str);
    return dst;
}
