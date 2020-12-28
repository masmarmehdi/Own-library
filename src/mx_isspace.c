#include "libmx.h"
bool mx_isspace(char c) {
    if (c == 32 || c == '\t' || c == '\v' || c == '\r' || c == '\n' || c == '\f')
        return 1;
    return 0;
}
