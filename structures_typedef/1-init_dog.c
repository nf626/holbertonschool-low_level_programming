#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer &my_dog.
 * @name: Poppy.
 * @age: 3.5.
 * @owner: Bob.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
