#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: argument is a pointer to a pointer to a list.
 * @str: argument is a pointer to a string.
 *       str needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
  unsigned int i = 0;
  list_t *first = NULL;
  char *copy = NULL;

  copy = malloc(sizeof(char *));
  if (copy == NULL)
    {
      free(copy);
      return (NULL);
    }

  first = malloc(sizeof(list_t));
  copy = strdup(str);

  first->str = copy;
  first->next = *head;
  *head = first;

  while (*(*head) != NULL)
    {
      i++;
    }
  return (first);
}
