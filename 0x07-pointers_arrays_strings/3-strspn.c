#include "main.h"

/**
  * _strspn - searching the string for a set of bytes
  * @s: source of thestring
  * @accept: accepts the string
  * Description:  gets the length of a prefix substring
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, h = 0;

while (accept[i])
{
j = 0;

while (s[j] != 32)
{
if (accept[i] == s[j])
{
h++;
}

j++;
}

i++;
}

return (h);
}
