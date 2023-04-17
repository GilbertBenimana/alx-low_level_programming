#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @dog: parameter of type dog
 * Description: a function that prints a struct dog
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
if (d->age > 0)
{
printf("Age: %.1f\n", d->age);
}
if (d->age  <= 0)
{
printf("Age: (nil)\n");
}
if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
}
}
