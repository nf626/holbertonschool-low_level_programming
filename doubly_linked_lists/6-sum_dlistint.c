#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 *                of a dlistint_t linked list.
 * @head: argument is a pointer to a list.
 *
 * Return: the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *ptr = head;
int sum = 0;

while (ptr != NULL)
{
ptr = ptr->next;
sum = sum + ptr->n;

}
return (sum);
}
