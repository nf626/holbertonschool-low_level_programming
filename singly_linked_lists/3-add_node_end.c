#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: argument is a pointer to a pointer to a list.
 * @str: argument is a pointer to a string.
 *       str needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int count = 0;
list_t *current = NULL;
list_t *last = NULL;

while (str[count] != '\0')
{
count++;
}

last = malloc(sizeof(list_t));
if (last == NULL)
{
free(last);
return (NULL);
}

last->str = strdup(str);
last->len = count;
last->next = NULL;

if (*head == NULL)
{
*head = last;
return (last);
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = last;
}
return (current);
}
