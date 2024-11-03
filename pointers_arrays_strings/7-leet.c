#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @c: Pointer variable.
 *
 * Return: c.
 */
char *leet(char *c)
{
int i = 0, j;
char big[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char small[] = {'a', 'e', 'o', 't', 'l', '\0'};
char num[] = {'4', '3', '0', '7', '1', '\0'};

while (c[i] != '\0')
{
j = 0;

while (j < 5)
{
if (c[i] == small[j] || c[i] == big[j])
{
c[i] = num[j];
}
j++;
}
i++;
}
return (c);
}
