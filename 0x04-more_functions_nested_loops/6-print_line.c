#include "main.h"

/**
 * print_line - print line
 * Description: draws a straight line in the terminal
 * Return: No return
 */

void print_line(int n)
{
int i;
do
{
if (n == 0)
{
_putchar('\n');
break;
}
_putchar('_');
i++;
}
while (i < n);
}
