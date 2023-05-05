#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - prints the binary representation
  * @n: number to representing in binary
  * Description: prints the binary representation
  * Return: returns nothing
  */
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
_divide(n);
}

/**
  * _divide - bit manipulation
  * @n: unsigned long int
  * Description: 
  * Return: returns nothing
  */
void _divide(unsigned long int n)
{
if (n < 1)
return;
_divide(n >> 1);
if (n & 1)
_putchar('1');
else
_putchar('0');
}
