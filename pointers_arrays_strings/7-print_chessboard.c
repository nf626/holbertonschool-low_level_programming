#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: a pointer to an array of 8 char.
 *
 * Return: 0.
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j;
int size = 8;

while (i < size)
{
j = 0;
while (j < size)
{
_putchar(*(*(a + i) + j));
j++;
}
_putchar('\n');
i++;
}

}
