#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog elements.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Description: Define a new type struct dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef struct of new name dog.
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
