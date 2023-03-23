#include "main.h"

/**
 * print_line - print line
 * Description: draws a straight line in the terminal
 * Return: No return
 */

void print_line(int n)
{

int i;

while (i <= n)
{
_putchar('_');
i++;
}
if (n < 1)
{
_putchar('\n');
}
}
