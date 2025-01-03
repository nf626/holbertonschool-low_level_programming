#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: argument is a pointer to a pointer to a list.
 * @n: number of nodes.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *first = NULL;

first = malloc(sizeof(dlistint_t));
if (first == NULL)
{
free(first);
return (NULL);
}

first->n = n;
first->prev = NULL;

if (*head == NULL)
{
first->next = NULL;
*head = first;
}
else
{
first->next = *head;
(*head)->prev = first;
*head = first;
}
return (first);
}
