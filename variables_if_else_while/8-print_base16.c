#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints numbers of base 16 in lowercase.
 *
 * only use putchar.
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

for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}

putchar('\n');
return (0);
}
