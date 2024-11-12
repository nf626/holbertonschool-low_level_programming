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
/** height memory allocation */
array = malloc(sizeof(int *) * height);
/** Failure */
if (array == NULL)
{
free(array);
return (NULL);
}
/** width memory allocation */
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
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
while (k < height)
{
while (l < width)
{
array[k][l] = 0;
l++;
}
k++;
}
return (array);
}
