#include "main.h"

/**
 * nat_sqr - subtract value by odd numbers to 0.
 * @x: variable from _sqrt_recursion.
 * @y: y = 0.
 *
 * Return: value back to _sqrt_recursion..
 */
int nat_sqr(int x, int y)
{
if ((y * y) == x)
{
return (x);
}
else if ((y * y) > x)
{
return (-1);
}
return (nat_sqr(x, y + 1));
}

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: variable to square root.
 *
 * Return: Square root variable.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (nat_sqr(n, 0));
}
