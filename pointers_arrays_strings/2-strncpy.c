#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the string.
 * @dest: pointer to the destination array.
 * @src: string to be copied.
 * @n: n size.
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i = 0, j = 0;

while (src[i] != '\0' && src[j] < n)
{
dest[i] = src[i];
i++;
}
dest[i++] = '\0';

return (dest);
}
