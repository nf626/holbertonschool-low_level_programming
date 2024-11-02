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
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

return (dest);
}
