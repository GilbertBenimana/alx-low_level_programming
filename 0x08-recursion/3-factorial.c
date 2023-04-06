#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number
  * @n: the int to be printed out
  * Description: a function that returns the factorial of a given number
  * Return: Return int.
  */


int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
