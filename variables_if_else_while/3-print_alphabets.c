#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabet in lowercase.
 *
 * Return: Success
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}

putchar('\n');
return (0);
}
