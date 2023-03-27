#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints string in reverse
 *@s: String
 * Description:  prints a string, in reverse
 * Return:No return
 */

void rev_string(char *s)
{
int len = 0, i = 0;
char aux;

while (s[len] != '\0')
len++;

while (i < len--)
{
aux = s[i];
s[i++] = s[len];
s[len] = aux;
}
}
