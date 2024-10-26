#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints possible combinations of single digit numbers.
 *
 * Numbers must be separated by ',', followed by a space.
 * only use putchar.
 * max of 4 putchar.
 * no type chars.
 *
 * Return: Success
 *
 */
int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
