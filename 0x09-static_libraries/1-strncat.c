#include "main.h"
#include <stdio.h>

/**
 * _strncat - concantanate strings
 *Description: concatenates two strings
 * @dest: destination string
 * @src: second string
 * @n: an int
 * Return: A char
 */

char *_strncat(char *dest, char *src, int n)
{
int d = 0, j = 0;

while (dest[d])
{
d++;
}

while (j < n && src[j])
{
dest[d] = src[j];
d++;
j++;
}

dest[d + n + 1] = '\0';

return (dest);
}
