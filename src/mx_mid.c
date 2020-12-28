#include "libmx.h"
int mx_mid(int a, int b, int c) {
    int mid;
    if ((b <= a && b >=  c) || (b <= c && b >= a))
        mid = b;
    if ((b <= c && c >= a) || (c >= b && c>= a))
        mid = c;
    if ((a >= b && a <= c) || (a <= b && a >= c))
        mid = a;
    return mid;
}
