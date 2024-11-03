#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: a variable.
 * @n: number of elements of the array.
 *
 */
void reverse_array(int *a, int n)
{
int i = 0, j = 0, temp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
