#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a pointer to a 2 dimensional array of integers
  * @width: width
  * @height: height
  * Description: a pointer to a 2 dimensional array of integers
  * Return: return NULL on failure
  */
int **alloc_grid(int width, int height)
{
int i, j, n, l;
int **a;

if (width <= 0 || height <= 0)
return (NULL);

a = malloc(sizeof(int *) * height);

if (a == NULL)
{
free(a);
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = malloc(sizeof(int) * width);

if (a[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(a[j]);
}

free(a);
return (NULL);
}
}

for (n = 0; n < height; n++)
{
for (l = 0; l < width; l++)
{
a[n][l] = 0;
}
}

return (a);
}
