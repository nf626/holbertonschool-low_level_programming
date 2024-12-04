#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * get_dnodeint_at_index - function that returns the nth node
 *                         of a dlistint_t linked list.
 *                         if the node does not exist, return NULL.
 * @head: argument is a pointer to a list.
 * @index: is the index of the node, starting from 0.
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  while (head != NULL)
    {
      head = head->next;
      index++;
    }
  return (head);
}