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
int i = 0;
char *array;

if (*str == '\0')
{
return (NULL);
}

array = malloc(sizeof(char) * 1 + 1);

while (str[i] != '\0')
{
array[i] = str[i];
i++;
}

if (array == NULL)
{
free(array);
return (NULL);
}

return (array);
}
