#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: argument is a pointer to a pointer to a list.
 * @n: number of nodes.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *current = NULL;
  dlistint_t *last = NULL;

  last = malloc(sizeof(dlistint_t));
  if (last == NULL)
    {
      free(last);
      return (NULL);
    }

  last->n = n;
  last->prev = *head;

  if (*head == NULL)
    {
      last->next = NULL;
      *head = last;
    }
  else
    {
      current = *head;
      while (current->next != NULL)
	{
	  current = current->next;
	  current->prev = *head;
	}
      current->next = last;
    }
  return (current);
}
