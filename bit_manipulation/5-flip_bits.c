#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need
 *             to flip to get from one number to another.
 * @n: integer.
 * @m: number to flip to.
 *
 * Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bit = n ^ m;
unsigned long int bit_flip = 0;

while (bit > 0)
{
bit_flip = bit_flip + (bit & 1);
bit = bit >> 1;
}

return (bit_flip);
}
