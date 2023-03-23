#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: prints a triangle
 * Return: No return
 */

void print_triangle(int size)
{

int i = 0;
int s;
int c;

while (i < size)
{
s = size - i;
while(s > 0)
{
_putchar('.');
s--;
}
i++;
for (c = 0; c < i; c++)
{
_putchar('#');
}
_putchar('\n');
}
if(size < 1)
{
_putchar('\n');
}
}
