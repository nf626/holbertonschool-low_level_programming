#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *dog;

  dog = malloc(sizeof());
  if (dog == NULL)
    {
      free(dog);
      return (NULL);
    }
}
