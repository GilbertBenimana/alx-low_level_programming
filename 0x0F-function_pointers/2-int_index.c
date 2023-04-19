#include "function_pointers.h"

/**
  * int_index -  a function that searches for an integer
  * @array: array
  * @size: the number of elements in the array 
  * @cmp:  to be used to compare values
  * Description:  a function that searches for an integer
  * Return: returns the index or -1 if no match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int j = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (j < size)
{
if (cmp(array[j]))
return (j);
j++;
}
}
}
return (-1);
}
