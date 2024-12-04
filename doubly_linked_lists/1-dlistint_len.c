#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in the list.
 * @h: argument is a pointer to a list.
 *
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
unsigned int count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
