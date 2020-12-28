#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *new = NULL;
    while(mx_isspace(*str))
        str++;
    int len = mx_strlen(str);
    while(mx_isspace(str[len-1]))
        len--;
    new = mx_strndup(str,len);
    return (char *)new;
}
