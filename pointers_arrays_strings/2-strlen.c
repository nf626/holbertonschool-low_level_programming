#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Print the length of string.
 * @s: s variable
 *
 * Return: returns the length of a string.
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}
