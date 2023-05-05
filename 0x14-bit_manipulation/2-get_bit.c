#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - gets the value of a bit at a given index
  * @n: number to find the index
  * @index: index to be found
  * Description: gets the value of a bit at a given index
  * Return: returns int
  */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int comp = 0;
while (n)
{
if (comp == index)
{
if (n % 2)
return (1);
else
return (0);
}
n = n / 2;
comp++;
}
if (index > comp && index < 63)
return (0);
return (-1);
}
