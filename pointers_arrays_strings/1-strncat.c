#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: n size of bytes.
 *
 * Return: dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
  int i = 0;
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
