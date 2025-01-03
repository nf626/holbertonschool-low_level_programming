#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything.
 * @n: number of times table.
 */
void print_times_table(int n)
{
int x = 0, y, sum = 0, one, ten, hund;
if (n >= 0 && n <= 15)
{
while (x <= n)
{
y = 0;
while (y <= n)
{
sum = x * y;
one = sum % 10;
ten = (sum % 100) / 10;
hund = sum / 100;
if (hund == 0 && y != 0)
{
_putchar(' ');
if (ten == 0)
_putchar(' ');
else
_putchar(ten + '0');
}
else if (hund != 0)
{
_putchar(hund + '0');
_putchar(ten + '0');
}
_putchar(one + '0');
if (y != n)
{
_putchar(',');
_putchar(' ');
}
y++;
}
_putchar('\n');
x++;
}
}
}
