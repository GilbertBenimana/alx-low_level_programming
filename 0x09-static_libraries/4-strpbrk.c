#include "main.h"

/**
  * _strpbrk - searching the string for any of a set of bytes
  * @s: source of the string
  * @accept: accepts characters
  * Description: searches a string for any of a set of bytes
  * Return: a string as the first found accepts character
  */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (s[i])
{
j = 0;

while (accept[j])
{
if (s[i] == accept[j])
{
s += i;
return (s);
}

j++;
}

i++;
}

return ('\0');
}
