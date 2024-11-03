#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @c: c variable.
 *
 * Return: c.
 */
char *string_toupper(char *c)
{
int i = 0;

while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}

i++;
}

return (c);
}
