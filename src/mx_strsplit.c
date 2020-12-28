#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    int word_len = 0;
    int i = 0;
    char **arr = NULL;

    if(!s)
        return NULL;
    arr = (char **)malloc((mx_count_words(s, c) + 1) *sizeof(char *));
    while((*s) && (*s != '\0')) {
        if( *s != c) {
            word_len = mx_count_letters(s,c);
            arr[i] = mx_strndup(s, word_len);
            s += word_len;
            i++;
            continue;
        }
        s++;
    }
    arr[i] = NULL;
    return arr;
}
