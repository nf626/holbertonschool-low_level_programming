#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @r: Insert value.
 *
 * Return: last digit.
 */
int print_last_digit(int r)
{
int lastd = r % 10;

if (lastd < 0)
{
lastd *= -1;
}
_putchar('0' + lastd);

return (lastd);
}
