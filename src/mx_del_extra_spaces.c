#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *mem = NULL;
    char *temp = NULL;
    int j = 0;
    if(!str)
        return NULL;
    else {
        mem = mx_strnew(mx_strlen(str));
        for(int i = 0; str[i]; i++) {
            if(mx_isspace(str[i])) {
                mem[j] = str[i];
                j++;
            }
            if (!mx_isspace(str[i]) && mx_isspace(str[i+1])){
                mem[j] = ' ';
                j++;
            }
        }
        temp = mx_strtrim(mem);
        mx_strdel(&mem);
        return temp;
    }
}
