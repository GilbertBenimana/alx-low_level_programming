#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * @size: size
 * @c: char
 * Description: and initializes it with a specific char
 * Return: return pointer, or NULL if it fails and size is 0
 */

char *create_array(unsigned int size, char c);
{
char *j
unsigned int i;
if (size == 0)
{
return (NULL);
}
j = malloc(sizeof(*j) * size);
if (j == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
j[i] = c;
}
return (j);
}
