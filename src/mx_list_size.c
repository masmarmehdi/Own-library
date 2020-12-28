#include "libmx.h"

int mx_list_size(t_list *list) {
    int size = 0;
    t_list *tmp = NULL;
    if (list) {
        tmp = list;
        while(tmp != NULL) {
            size++;
            tmp = tmp->next;
        }
    }
    return size;
}
