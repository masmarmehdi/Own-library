#include "libmx.h"
char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int sum = mx_strlen(replace) - mx_strlen(sub);
    int len = mx_strlen(str) + mx_count_substr(str, sub) * sum;
    char * mem = mx_strnew(len);
    if(!str || !replace || !sub || mx_strlen(str) <= mx_strlen(sub)) {
        return NULL;
    }
    for(int i = 0; i < len; i++, str++) {
        if(!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub))) {
            str += mx_strlen(sub);
            for(int j = 0; j < mx_strlen(replace); i++, j++)
                mem[i] = replace[j];
        }
        mem[i] = *str;
    }
    return mem;
}
