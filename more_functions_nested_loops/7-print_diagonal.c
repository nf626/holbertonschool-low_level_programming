#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: number of times the character \ is printed.
 *
 */

void print_diagonal(int n)
{
int count = 0;
int j;

while (n > 0)
{
j = count;
while (j > 0)
{
_putchar(' ');

j--;
}
_putchar('\\');
_putchar('\n');

count++;
n--;
}

if (count < 1)
{
_putchar('\n');
}
}
