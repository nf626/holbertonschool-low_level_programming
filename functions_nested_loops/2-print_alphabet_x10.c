#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x alphabet in lowercase.
 *
 */
void print_alphabet_x10(void)
{
char i;
int j;

for (i = 1; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}

}
