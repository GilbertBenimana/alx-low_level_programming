#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concantanate strings
 *Description: concatenates two strings
 * @dest: destination string
 * @src: second string
 * Return: A char
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
dest[i] = dest[i];
{
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
}
return dest;
}
