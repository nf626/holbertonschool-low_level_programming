#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y.
 * @x: value.
 * @y: power.
 *
 * Return: value x^y.
 */
int _pow_recursion(int x, int y)
{
int value;

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}

value = x * _pow_recursion(x, y - 1);
return (value);
}
