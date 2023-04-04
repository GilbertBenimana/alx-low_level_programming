#include "main.h"

/**
  * _strchr - locating the character in the string
  * @s: source of the string
  * @c: character to be found
  * Description: locates a character in a string
  * Return: the string from character that was found
  */
char *_strchr(char *s, char c)
{
int i = 0, i;

while (s[i])
{
i++;
}

for (j = 0; j <= i; j++)
{
if (c == s[j])
{
s += j;
return (s);
}
}

return ('\0');
}
