#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination.
 * @src: source to copy.
 * @n: number of bytes to memory area.
 *
 * Return: pointer to function.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
