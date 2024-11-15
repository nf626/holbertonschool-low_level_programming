#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum amount 0.
 * @max: maximum amount 10.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int i = 0;
int *array;

if (min > max)
{
return (NULL);
}
array = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (array == NULL)
{
free(array);
return (NULL);
}
while (min <= max)
{
array[i] = min;
min++;
i++;
}
return (array);
}
