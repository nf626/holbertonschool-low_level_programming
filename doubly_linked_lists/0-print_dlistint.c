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
  dlistint_t *new = NULL;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    {
      free(new);
    }
  
  while (h != NULL)
    {
      if (h == NULL)
	{
	  h = new;
	  count++;
	  return (count);
	}
      else
	{
	  new = h;
	  new = new->next;
	  count++;
	}
    }
  return (count);
}
