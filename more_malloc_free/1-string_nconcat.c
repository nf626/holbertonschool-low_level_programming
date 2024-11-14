#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: String 1 - "Best ". (5)
 * @s2: String 2 - "School !!!". (10)
 * @n: Size - 6.
 *
 * Return: newly allocated space in memory, which contains s1
 *         followed by the first n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, total = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (n >= j)
total = total + i + j;
else
total = total + i + n;
str = malloc(sizeof(char) * (total + 1));
if (str == NULL)
return (NULL);
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
