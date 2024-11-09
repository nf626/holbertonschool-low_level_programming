#include "main.h"

/**
 * nat_sqr - subtract value by odd numbers to 0.
 * @x: variable from _sqrt_recursion.
 * @y: 1 = True.
 *
 * Return: Square root variable.
 */
int nat_sqr(int x, int y)
{ 
  if ((x * x)  == y)
    {
      return (x);
    }
  else if ((x * x) < y)
    {
      return (-1);
    }
  return (x * nat_sqr(x - 1, y));
}

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: variable to square root.
 *
 * Return: Square root variable.
 */
int _sqrt_recursion(int n)
{
  return (nat_sqr(n, 1));
}
