#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints lowercase alphabet in reverse.
 *
 * only use putchar.
 *
 * Return: Success
 *
 */
int main(void)
{
char n;

for (n = 'z'; n >= 'a'; n--)
{
putchar(n);
}

putchar('\n');
return (0);
}
