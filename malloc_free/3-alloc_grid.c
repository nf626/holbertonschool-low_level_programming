#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: row.
 * @height: coloumn.
 *
 * Return: 2D array.
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int **ptr;

  *ptr = malloc(sizeof(int *) * (width * height));
  /** Failure */
  if (ptr == NULL)
    {
      free(*ptr);
      return (NULL);
    }
  /** if width or height <= 0 */
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  /** Row */
  for (i = 0; i < width; i++)
    {
      for (j = 0; j < height; j++)
	{
	}
    }
  /** Coloumn */
  return ();
}
