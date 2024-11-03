#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: Hello
 * @s2: World!
 *
 * Return: results.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, value = 0;

while (s2[i] != '\0')
{
if (s1[i] < s2[i])
{
value = s1[i] - s2[i];
break;
}
else if (s1[i] > s2[i])
{
value = s1[i] - s2[i];
break;
}
else
{
value = 0;
}
i++;
}

return (value);
}
