#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: argument is a pointer pointing to a pointer to a list.
 * @idx: the new node should be added at index. Index starts at 0.
 * @n: number of index of the list.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  unsigned int count = 0;
  /**Pointer to start of list h*/
  dlistint_t *ptr = *h;
  dlistint_t *new = NULL;
  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    {
      free(new);
      return (NULL);
    }

  new->n = n;
  new->prev = NULL;
  new->next = NULL;
  
  while (ptr != NULL)
    {
      count++;
      if (count == idx)
	{
	  return (ptr);
	}
      else
	{
	  ptr = ptr->next;
	}
    }
  return (NULL);
}
