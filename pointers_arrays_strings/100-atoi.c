#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: s character to integer.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
int i = 0, j, value = 0, sign = 1;

while ((s[i] < 48 || s[i] > 57) && (s[i] != '\0'))
{
if (s[i] == '-')
{
sign = sign * -1;
}
i++;
}

j = i;

while ((s[j] >= 48) && (s[j] <= 58))
{
value = (value * 10) + sign * (s[j] - '0');
j++;
}
return (value);
}
