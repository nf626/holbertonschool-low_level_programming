#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars, 
 *                and initializes it with a specific char.
 * @size:
 * @c:
 *
 * Return: Pointer to array or NULL.
 */
char *create_array(unsigned int size, char c)
{
  int i;
  char array;

  if (size == 0)
    {
      return (NULL);
    }
  while (i < 98)
    {
      _putchar(c);
      i++;
    }
  return (c);
}
