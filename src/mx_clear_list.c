#include "libmx.h"

void mx_clear_list(t_list **list) {
    while(list) {
        t_list *tmp = NULL;
        if(*list != NULL || list != NULL) {
            tmp = (*list)->next;
            free(*list);
            *list = tmp;
        }
    }
}
