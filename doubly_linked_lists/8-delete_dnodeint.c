#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at
 *                            index index of a dlistint_t linked list.
 * @head: argument is a pointer pointing to a pointer to a list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 success, -1 failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  unsigned int count = 0;
  dlistint_t *new, *temp = *head;
}
