#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 *                  parameter on each element of an array.
 * @array: array[5] = {0, 98, 402, 1024, 4096}.
 * @size: size of array.
 * @action: pointer to function returning void.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

while (i < size)
{
action(array[i]);
i++;
}
}
