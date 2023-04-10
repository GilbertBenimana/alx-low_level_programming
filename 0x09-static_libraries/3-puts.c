#include "main.h"
#include <stdio.h>

/**
 * _puts - print string with stdout
 *@str: String
 * Description:  prints a string, followed by a new line
 * Return:No return
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
