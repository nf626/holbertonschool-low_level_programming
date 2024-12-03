#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: argument is a pointer to a list.
 *
 */
void free_list(list_t *head)
{
  list_t *temp = NULL;

  while (head != NULL)
    {
      temp = head;
      head = head->next;
      free(temp);
    }
  free(head);
}
