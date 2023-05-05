#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: number to be modified
  * @index: index in the number to be modified
  * Description: sets the value of a bit to 0 at a given index
  * Return: returns 1 if it worked, or -1 otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(unsigned long int) * 8)
{
*n &= (~(1 << index));
return (1);
}
return (-1);
}
