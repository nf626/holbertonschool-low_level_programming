#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 * @size: size = 98.
 * @c: c = H.
 *
 * Return: Pointer to array or NULL.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ptr;

if (size == 0)
{
return (NULL);
}

ptr = malloc(sizeof(char) * size);

if (ptr == NULL)
{
return (NULL);
}
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
