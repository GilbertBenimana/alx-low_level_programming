#include "main.h"

/**
  * _strstr - locating the substring
  * @haystack: the string to be searched
  * @needle: the string to be found
  * Description: a function that locates a substring
  * Return: a char value
  */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;

while (haystack[i])
{
while (needle[j])
{
if (haystack[i + j] != needle[j])
{
break;
}

j++;
}

if (needle[j] == '\0')
{
return (haystack + i);
}

i++;
}

return ('\0');
}
