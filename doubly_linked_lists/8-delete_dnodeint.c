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
	dlistint_t *pos = *head, *temp = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
		}
		else
			*head = NULL;
		return (1);
	}
	while (count < index - 1 && pos != NULL)
	{
		pos = pos->next;
		count++;
	}
	if (pos != NULL)
	{
		temp = pos->next;
		if (temp->next)
			temp->next->prev = pos;
		pos->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
