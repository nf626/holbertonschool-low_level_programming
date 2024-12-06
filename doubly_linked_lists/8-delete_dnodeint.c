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
  unsigned int i = 0;
	dlistint_t *bfr_node = *head, *tmp_node = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp_node);
		}
		else
			*head = NULL;
		return (1);
	}
	while (i < index - 1 && bfr_node)
	{
		bfr_node = bfr_node->next;
		i++;
	}
	if (bfr_node)
	{
		tmp_node = bfr_node->next;
		if (tmp_node->next)
			tmp_node->next->prev = bfr_node;
		bfr_node->next = tmp_node->next;
		free(tmp_node);
		return (1);
	}
	return (-1);
}
