#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination pointer.
 * @src: source pointer.
 *
 * Return: dest string.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*dest != 0)
{
++dest;
}
while (*src != 0)
{
*dest++ = *src++;
*dest = 0;
}

return (ptr);
}
