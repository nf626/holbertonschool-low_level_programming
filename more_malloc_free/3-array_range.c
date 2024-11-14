#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum amount.
 * @max: maximum amount.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
  int i;
int *array;

  if (min > max)
    {
      return (NULL);
    }

  array = malloc(min * max);
  if (array == NULL)
    {
      free(array);
      return (NULL);
    }
  while (i <= min)
    {
      array[i] = array[min];
      i++;
    }
  return (array);
}
