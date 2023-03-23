#include "main.h"

/**
 * print_line - print line
 * @n: number of times
 * Description: draws a straight line in the terminal
 * Return: No return
 */

void print_line(int n)
{

int i;
i = 0;

while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
