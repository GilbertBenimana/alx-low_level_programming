#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * @array: array
  * @size: array size
  * @action: a pointer to the function
  * Description: executes a function given as a parameter
  * Return: returns nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j = 0;
if (array != NULL && action != NULL && size > 0)
{
while (j < size)
{
action(array[j]);
j++;
}
}
}
