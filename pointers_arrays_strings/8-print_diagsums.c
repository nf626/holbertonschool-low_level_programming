#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: array pointer.
 * @size: size of array.
 *
 */
void print_diagsums(int *a, int size)
{
int i = 0, left = 0, right = 0;

while (i < (size * size))
{
left = left + a[i];

i = i + size + 1;
}
i = size - 1;
while (i < (size * size) - 1)
{
right = right + a[i];

i = i + size - 1;
}
printf("%d, %d\n", left, right);
}
