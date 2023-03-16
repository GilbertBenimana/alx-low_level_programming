#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* The function that prints the size of various types on the computer it is compiled and run on */

int main(void)
{
char c = 'a';
int n = 1;
float fn = 1.5;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(n));
printf("Size of a long int: %lu byte(s)\n", sizeof((long) n));
printf("Size of a long long int: %lu byte(s)\n", sizeof((long)(long) n));
printf("Size of a float: %lu byte(s)\n", sizeof(fn));
/* Returning 0 for success */
return (0);
}
