#include "main.h"

/**
 * subtract - subtract value by odd numbers to 0.
 * @x: variable from _sqrt_recursion.
 * @y:
 *
 * Return: Square root variable.
 */
int subtract(int x, int y)
{
  if ((x * x) == y)
    {
      return (x);
    }
  else if ((x * x) >= y)
    {
      return (-1);
    }
  re
  return _sqrt_recursion();
}

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: variable to square root.
 *
 * Return: Square root variable.
 */
int _sqrt_recursion(int n)
{
  int num = 1;

  return (n * subtract(n, 1));
}
