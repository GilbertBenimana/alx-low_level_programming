#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: unsigned int
  * Description: returns the sum of all its parameters
  * Return: returns 0 for success
  */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int sum = 0;
if (n != 0)
{
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return (sum);
}
return (0);
}
