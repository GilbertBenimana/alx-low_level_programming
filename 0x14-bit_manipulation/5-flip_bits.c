#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - a function that returns the number of bits 
  * @n: unsigned long int
  * @m: unsigned long int
  * Description: a function that returns the number of bits 
  * Return: returns unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int ma = 0, c = 0;
ma = n ^ m;
while (ma)
{
if (ma & 1)
c++;
m >>= 1;
}
return (c);
}
