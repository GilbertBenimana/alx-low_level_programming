#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
  * first - executes before the main function is executed
  * Description: executes before the main function is executed
  * Return: nothing.
  */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
