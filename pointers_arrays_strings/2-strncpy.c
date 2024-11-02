#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the string.
 * @dest: Print Asterisk (*).
 * @src: String to be copied.
 * @n: n size.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
dest[i++] = '\0';

return (dest);
}
