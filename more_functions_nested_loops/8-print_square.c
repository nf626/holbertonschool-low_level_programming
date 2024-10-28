#include "main.h"

/**
 * print_square - prints a square.
 * @size: size of square.
 *
 */

void print_square(int size)
{
int row, coloumn;
coloumn = 0;

if (size < 1)
{
_putchar('\n');

while (coloumn < size)
{
row = 0;

while (row < size)
{
_putchar('#');
row++;
}
_putchar('\n');
coloumn++;
}
}
}
