#include "main.h"

/**
 * print_square - print square
 * @size - size of square
 * Description:  a function that prints a square
 * Return: No return
 */

void print_square(int size)
{
    
int i;
int j;

for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size < 1)
{
_putchar('\n');
}
}
