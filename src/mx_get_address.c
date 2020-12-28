#include "libmx.h"

char *mx_get_address(void *p) {
    char *tmp = mx_nbr_to_hex((unsigned long) &p);
    char *address = mx_strnew(mx_strlen(tmp) + 2);
    char *head = NULL;

    address[0] = '0';
    address[1] = 'x';
    head = address;
    address += 2;
    address = mx_strcpy(address,tmp);
    address = head;
    free(tmp);
    free(head);
    return address;
}
