#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to integer.
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = 0;

if (index > (sizeof(n) * 8) - 1)
{
return (-1);
}

bit = ~(1 << index);
*n = *n & bit;

return (1);
}
