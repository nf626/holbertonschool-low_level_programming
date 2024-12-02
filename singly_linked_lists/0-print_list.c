#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: argument is a pointer to a list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
  unsigned int i = 0;

  while (h != NULL)
    {
      printf("[%d] %s\n", h->len, h->str);
      if (h->str == NULL)
	{
	  printf("[0] (nil)\n");
	}
      h = h->next;      
      i++;
    }

  return (i);
}
