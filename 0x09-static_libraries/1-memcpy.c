#include "main.h"

/**
  * _memcpy - copying the memory area
  * @dest: destination of memory area
  * @src: source of memory area
  * @n: bytes from the memory area to be copied
  * Description: a function that copies memory area
  * Return: the memory area that was replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
