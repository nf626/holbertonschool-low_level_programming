#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: argument is a pointer to a list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
  unsigned int count = 0;

  while (h != NULL)
    {
      
      h = h->next;
      count++;
    }
}
