#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - for addition
  * @a: int
  * @b: int
  * Description: for addition
  * Return: returns a + b
  */
int op_add(int a, int b)
{
return (a + b);
}

/**
  * op_sub - for substitution
  * @a: int
  * @b: int
  * Description: for substitution
  * Return: returns a - b
  */
int op_sub(int a, int b)
{
return (a - b);
}

/**
  * op_mul - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
return (a * b);
}

/**
  * op_div - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
  * op_mod - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
