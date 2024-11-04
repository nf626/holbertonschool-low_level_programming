#include "main.h"

/**
 * cap_string - capitalises all words of a string.
 * @c: variable to capitalise.
 *
 * Return: c.
 */
char *cap_string(char *c)
{
int i = 0, j, value = 32;
int size = 13;
char array[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};

while (c[i] != '\0')
{
j = 0;

while (j < size)
{
if ((i == 0 || c[i - 1] == array[j]) && (c[i] >= 'a' && c[i] <= 'z'))
{
c[i] = c[i] - value;
}
j++;
}
i++;
}
return (c);
}