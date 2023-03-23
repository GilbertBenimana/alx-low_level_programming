#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: length of the diagonal
 * Description: draws a diagonal in the terminal
 * Return: No return
 */

void print_diagonal(int n)
{

int c, i;
c = 0;

while (n > 0)
{
i = c;
while (i > 0)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}
if (c < 1)
_putchar('\n');
}
