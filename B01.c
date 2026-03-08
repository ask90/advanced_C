#include <stddef.h>

size_t totalMemoryUsage(list *head)
{
    size_t total = 0;

    while (head != NULL) {
        total += head->size;
        head = head->next;
    }

    return total;
}
