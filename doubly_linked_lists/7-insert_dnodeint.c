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
unsigned int count = 0;
dlistint_t *new, *temp = *h;
new = malloc(sizeof(dlistint_t));

if (new != NULL)
{
new->n = n;
if (idx == 0)
{
if (*h != NULL)
{
new->next = *h;
(*h)->prev = new;
}
*h = new;
return (new);
}
while ((count < idx - 1) && (temp != NULL))
{
temp = temp->next;
count++;
}
if (temp != NULL)
{
new->next = temp->next;
new->prev = temp;
if (temp->next != NULL)
{
temp->next->prev = new;
}
temp->next = new;
return (new);
}
}
return (NULL);
}
