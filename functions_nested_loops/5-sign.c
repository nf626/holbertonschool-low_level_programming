#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of the a number.
 * @n: Checks n.
 *
 * Return: 1 and + if n is > 0, 0 and 0 if n is 0, -1 and - if n < 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
