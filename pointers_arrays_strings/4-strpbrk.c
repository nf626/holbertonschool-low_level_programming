#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String.
 * @accept: matches one of the bytes.
 *
 * Return: string or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (*s == accept[i])
{
return (s);
}
if (accept[i] == '\0')
{
return (s);
}
i++;
}
s++;
}
return (NULL);
}
