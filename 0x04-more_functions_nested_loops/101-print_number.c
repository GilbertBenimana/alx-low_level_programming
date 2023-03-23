#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
int digits = 1;
int temp;

if (n < 0)
{
_putchar('-');
n = -n;
}

temp = n;
while (temp / 10 > 0)
{
digits *= 10;
temp /= 10;
}

while (digits > 0)
{
_putchar((n / digits) +'0');
n %= digits;
digits /= 10;
}
}
