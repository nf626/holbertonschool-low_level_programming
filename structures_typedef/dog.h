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

typedef struct dog dog_t;
dog_t *new_name(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
