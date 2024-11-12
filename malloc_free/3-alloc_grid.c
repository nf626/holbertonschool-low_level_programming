#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: row.
 * @height: coloumn.
 *
 * Return: 2D array.
 */
int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **array;
/** if width or height <= 0 */
if (width <= 0 || height <= 0)
{
return (NULL);
}
/** Row memory allocation */
array = malloc(sizeof(int *) * width);
/** Failure */
if (array == NULL)
{
free(array);
return (NULL);
}
/** Coloumn memory allocation */
for (i = 0; i < width; i++)
{
array[i] = malloc(sizeof(int) * height);
if (array[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(array[j]);
}
free(array);
return (NULL);
}
}
k = 0, l = 0;
while (k < width)
{
while (l < height)
{
array[k][l] = 0;
l++;
}
k++;
}
return (array);
}
