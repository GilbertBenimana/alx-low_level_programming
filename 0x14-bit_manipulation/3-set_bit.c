#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - sets value of a bit to 1 at a given index
  * @n: number to be modified
  * @index: index in the number to be modified
  * Description: sets value of a bit to 1 at a given index
  * Return: returns 1 if it worked, or -1 otherwise
  */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
return ((*n |= 1 << index) ? 1 : -1);
}
