#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *tmp = NULL;
    t_list *back = mx_create_node(data);

    if(list == NULL || *list == NULL) {
        *list = back;
    }
    else {
        tmp = *list;
        while(tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = back;
    }
}
