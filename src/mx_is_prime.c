#include "libmx.h"
bool mx_is_prime(int num) {
    if(num <= 1)
        return false;
    if(num % 2 == 0 && num > 2)
        return false;
    for(int i = 3; i < num/2;i+=2) {
        if(num % i == 0)
            return false;
    }
    return true;
}
