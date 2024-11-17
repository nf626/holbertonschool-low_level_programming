#include <stdlib.h>
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
unsigned int i = 0, j = 0, k = 0;
dog_t *ndog;
if (name == NULL || owner == NULL)
return (NULL);
ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
{
free(ndog);
return (NULL);
}
while (name[i] != '\0')
i++;
ndog->name = malloc(sizeof(char) * i);
if (ndog->name == NULL)
{
free(ndog);
return (NULL);
}
while (k < i)
{
ndog->name[k] = name[k];
k++;
}
ndog->age = age;
while (owner[j] != '\0')
j++;
ndog->owner = malloc(sizeof(char) * j);
if (ndog->owner == NULL)
{
free(ndog->name);
free(ndog);
return (NULL);
}
k = 0;
while (k < j)
{
ndog->owner[k] = owner[k];
k++;
}
return (ndog);
}
