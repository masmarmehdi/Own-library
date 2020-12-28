#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *str = s1;
    const unsigned char *str2 = s2;
    unsigned int i = 0;
    if( n == 0)
        return 0;
    else {
        while(str[i] == str2[i] && i != n) {
            if(str[i] == '\0' && str2[i] == '\0')
                return 0;
            i++;
        }
        return str[i] - str2[i];
    }
}
