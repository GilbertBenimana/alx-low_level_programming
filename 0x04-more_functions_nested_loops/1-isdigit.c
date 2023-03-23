#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Check if c is a digit
 * @c: An input int
 * Description: function return 1 if character is digit
 * and 0 otherwise
 * Return: 1 if is digit or 0 if is not
 */

int _isdigit(int c)
{
int i;
int isdigit = 0;

for (i = 0; i < 9; i++)
{
if (i == c)
{
isdigit = 1;
}
}
return (isdigit);
}
