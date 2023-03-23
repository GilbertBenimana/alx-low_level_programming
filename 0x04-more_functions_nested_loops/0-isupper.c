#include <stdio.h>
#include "main.h"

/**
 * @_isupper: Check if character is uppercase
 * @c: An input character
 * Description: function return 1 if character is uppercase
 * and 0 otherwise
 * Return: 1 if is uppercase or 0 if is uppercase
 */

int _isupper(int c)
{
char i;
int isupper = 0;

for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{
isupper = 1;
}
}
return (isupper);
}
