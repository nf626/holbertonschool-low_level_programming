#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: bytes.
 *
 * Return: s pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int count = 0;

while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (accept[i] == *s)
{
count = count + 1;
break;
}
i++;
}
if (accept[i] == '\0')
{
return (count);
}
s++;
}
return (count);
}
