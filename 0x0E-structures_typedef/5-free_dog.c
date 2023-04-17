#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free a dog
  * @d: parameter of type dog
  *
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
