#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: n variable.
 *
 * Return: n < 0 error (-1), n > 0 return value.
 */
int factorial(int n)
{
  int value;
  
  if (n == 1)
  {
    return (-1);
  }

  value = n * factorial(n - 1);

  return (value);
}
