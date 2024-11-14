#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array of elements.
 * @size: size bytes.
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *array;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(nmemb * size);
if (array == NULL)
{
free(array);
return (NULL);
}
while (i < (nmemb * size))
{
array[i] = 0;
i++;
}
return (array);
}
