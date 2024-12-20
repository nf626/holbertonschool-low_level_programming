#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

/** malloc fails */
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}
