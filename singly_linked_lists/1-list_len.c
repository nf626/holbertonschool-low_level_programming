#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: argument is a pointer to a list.
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
