#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if(arr && delim) {
        for(int i = 0; arr[i]; i++) {
            if(i >= 1)
                mx_printstr(delim);
            mx_printstr(arr[i]);
        }
        mx_printchar('\n');
    }
}
