#include "main.h"

/**
 * print_line - print line
 * Description: draws a straight line in the terminal
 * Return: No return
 */

void print_line(int n)
{
int i;
int n = 10;
do
{
if (n == 0)
{
break;
}
_putchar('-');
i++;
}
while (i < n);
_putchar('\n');
}
