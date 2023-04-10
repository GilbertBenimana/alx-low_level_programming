#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: String
 * Description: returns the length of a string
 * Return:Return string length
 */

int _strlen(char *s)
{
int count = 0;
for (; *s != '\0'; s++)
{
count++;
}
return (count);
}
