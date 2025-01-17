#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Pointer to integer.
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = 0;

if (index > ((sizeof(n) * 8) - 1))
{
return (-1);
}

bit = 1 << index;
*n = *n | bit;

return (1);
}
