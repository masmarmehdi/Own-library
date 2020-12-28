#include "libmx.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *, void *)) {
    t_list *buffer = list;
    int count = 0;
    void *tmp;

    while(buffer->next) {
        if(cmp(buffer->data, buffer->next->data)) {
            tmp = buffer->next->data;
            buffer->next->data = buffer->data;
            buffer->data = tmp;
        }
        buffer = buffer->next;
        count++;
    }
    for(int i = count; i > 0; i--) {
        buffer = list;
        for(int j = 0; j < i; j++) {
            if(cmp(buffer->data, buffer->next->data)) {
                tmp = buffer->next->data;
                buffer->next->data = buffer->data;
                buffer->data = tmp;
            }
            buffer = buffer->next;
        }
    }
    return list;
}
