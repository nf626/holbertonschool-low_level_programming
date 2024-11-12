#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: Best.
 * @s2: School.
 *
 * Return: Best School.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, total = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

total = i + j;
str = malloc(sizeof(char) * (total + 1));
if (str == NULL)
{
free(str);
return (NULL);
}
j = 0;
while (k < total)
{
if (k <= i)
{
str[k] = s1[k];
}
if (k >= i)
{
str[k] = s2[j];
j++;
}
k++;
}
str[k] = '\0';
return (str);
}
