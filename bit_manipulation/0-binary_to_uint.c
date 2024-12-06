#include "main.h"

/**
 * int binary_to_uint - function that converts a binary number
 *                      to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number or 0.
 *         there is one or more chars in the string b that is not 0 or 1.
 *         b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int i = 0;
  while (b[i] != '\0')
    {
      _putchar(i);
      i++;
    }
  return (i);
}
