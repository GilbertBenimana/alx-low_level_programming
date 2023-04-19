#include "function_pointers.h"

/**
  * print_name - a function that prints a name
  * @name: name to be prints
  * @f: pointer to the function
  * Description: a function that prints a name
  * Return: returns nothing at all
  */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
