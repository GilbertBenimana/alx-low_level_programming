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
int count;
for (count = 0; s[count] != '\0'; count++);
while (count > 0)
{
_putchar(s[count]);
count--;
}
}
