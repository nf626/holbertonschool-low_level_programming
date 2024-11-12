#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to copy (Duplicated).
 *
 * Return: str = NULL / pointer to the duplicated string.
 */
char *_strdup(char *str)
{
int i = 0, j = 0, length;
char *array;

if (*str == '\0')
{
return (NULL);
}
while (str[i] != '\0')
{
length = length + 1;
i++;
}
array = malloc(sizeof(char) * (length + 1);
while (str[i] != '\0')
{
array[i] = str[i];
i++;
}
if (i < length)
{
array[i] = '\0';
i++;
}
if (array == NULL)
{
return (NULL);
}
return (array);
}
