#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: parameter of dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: initializes a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}

