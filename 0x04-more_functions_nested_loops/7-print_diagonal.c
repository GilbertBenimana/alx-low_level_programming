#include "main.h"

/**
 * print_line - print line
 * Description: draws a straight line in the terminal
 * Return: No return
 */

void print_line(int n)
{
    
int c, i;
c = 0;

while (n > 0)
{
i = c;
while (i > 0)
{
putchar(' ');
i--;
}
putchar('\\');
putchar('\n');
c++;
n--;
}
if (c < 1)
putchar('\n');
}
