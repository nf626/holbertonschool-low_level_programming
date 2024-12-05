#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - function that inserts a
 *                            new node at a given position.
 * @h: argument is a pointer pointing to a pointer to a list.
 * @idx: the new node should be added at index. Index starts at 0.
 * @n: value assigned to new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count;
dlistint_t *new, *current, *prev;
 current = *h;
 if (*h == NULL)
   {
     current->next = NULL;
     *h = current;
     return (*h);
   }
 if (*h == NULL && idx == 0)
   return (NULL);
 new = malloc(sizeof(dlistint_t));
 if (*h != NULL)
   {
     count = 0;
     prev = NULL;
     while (current->prev != NULL)
       current = current->prev;
     while (current != NULL && count < idx)
       {
	 prev = current;
	 current = current->next;
	 count++;
       }
     if (count == idx)
       {
	 new->n = n;
	 new->prev = prev;
	 if (current != NULL)
	   current->prev = new;
	 new->next = current;
	 if (idx != 0)
	   prev->next = new;
	 else
	   *h = new;
	 return (new);
       }
     return (NULL);
   }
 new->next = NULL;
 new->prev = NULL;
 new->n = n;
 *h = new;
 return (new);
}
