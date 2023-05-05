#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - converts a binary number
  * @b: binary string to be converted
  * Description: converts a binary number
  * Return: returns converted positive number
  */
unsigned int binary_to_uint(const char *b)
{
unsigned int length = 0, c = 0, sum = 0;
if (b == NULL)
return (0);
length = _strlen(b);
while (length--)
{
if (b[length] != 48 && b[length] != 49)
return (0);
if (b[length] == 49)
sum += 1 << c;
c++;
}
return (sum);
}

/**
  * _strlen - length of a string
  * @s: string to be counted
  * Description: length of a string
  * Return: returns string length
  */
int _strlen(const char *s)
{
int c = 0;
while (s[c])
c++;
return (c);
}
