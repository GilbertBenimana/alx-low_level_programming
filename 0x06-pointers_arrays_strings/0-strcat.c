#include <stdio.h>
#include "main.h"

/**
 * _strcat - concantanate strings
 *Description: concatenates two strings
 * @dest: destination string
 * @src: second string
 * Return: A char
 */

char *_strcat(char *dest, char *src)
{
int d = 0, i;

while (dest[d])
{
d++;
}

for (i = 0; src[i] != 0; i++)
{
dest[d] = src[i];
d++;
}

dest[d] = '\0';
return (dest);
}
