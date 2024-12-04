#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: argument is a pointer to a list.
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = NULL;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
free(head);
}
