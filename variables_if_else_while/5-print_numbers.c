#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digits of base 10.
 *
 * Return: Success
 *
 */
int main(void)
{
char n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}

putchar('\n');
return (0);
}
