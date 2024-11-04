#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: String.
 * @c: Character.
 *
 * Return: First character occurence found,
 * NULL not found.
 **/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
