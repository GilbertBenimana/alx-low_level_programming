#include "main.h"

/**
  * _memset - Filling memory with a constant byte
  * @s: the memory area to be filled
  * @b: constant byte to be filled
  * @n: bytes of memory area to be filled
  * Description: a function that fills memory with a constant byte
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
