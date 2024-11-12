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
int length = 1, i = 0;
char *array;

if (*str == '\0')
{
return (NULL);
}

while (str[length] != '\0')
{
length++;
}
array = malloc(sizeof(char) * (length + 1));

if (array == NULL)
{
free(array);
return (NULL);
}

while (i < length)
{
array[i] = str[i];
i++;
}
array[i] = '\0';
return (array);
}
