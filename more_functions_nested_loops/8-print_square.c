#include "main.h"

/**
 * print_square - prints a square.
 * @size: size of square.
 *
 */

void print_square(int size)
{
int row = 0, coloumn = 0;

if (size > 0)
{
while (row < size)
{
while (coloumn < size)
{
_putchar('#');

coloumn++;
}
coloumn = 0;
row++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
