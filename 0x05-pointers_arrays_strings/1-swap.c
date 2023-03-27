#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers
 *@a: first integer
 *@b: second integer
 * Description: swap two integers a and b
 * Return: No return
 */

void swap_int(int *a, int *b)
{
int i, j;
i = *a;
j = *b;
*a = j;
*b = i;
}
