#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabet in lowercase except for q and e.
 *
 * Return: Success
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}

putchar('\n');
return (0);
}
