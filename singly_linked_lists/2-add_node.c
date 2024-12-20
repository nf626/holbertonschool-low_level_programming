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
unsigned int count = 0;
list_t *first = NULL;

first = malloc(sizeof(list_t));
if (first == NULL)
{
free(first);
return (NULL);
}

first->str = strdup(str);
while (str[count] != '\0')
{
count++;
}
first->len = count;
first->next = *head;
*head = first;

return (first);
}
