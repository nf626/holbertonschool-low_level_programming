#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int x, y, z;

for (x = 0; x <= 9; x++)
{
_putchar('0');

for (y = 1; y <= 9; y++)
{
_putchar(',');
_putchar(' ');

z = x * y;

if (z <= 9)
{
_putchar(' ');
}
else
{
_putchar('0' + (z / 10));
}
_putchar('0' + (z % 10));
}
_putchar('\n');
}
}
