#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%i] %s\n", h->len, h->str);
        count++;
        h = h->next;
    }

    return count;
}