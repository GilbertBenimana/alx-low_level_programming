#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints in reverse
 *@s: String
 * Description:  prints a string, in reverse
 * Return:No return
 */

void print_rev(char *s)
{
int count;
for (count = 0; s[count] != '\0'; count++)
{
}
while (count > 0)
{
count--;
_putchar(s[count]);
}
_putchar('\n');
}
