#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: a program that multiplies two numbers
 * Return: Return 0 for success and 1 for failure
 */

int main(int argc, char *argv[])
{
int i, m = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
m *= atoi(argv[i]);
}
printf("%d\n", m);
i = 0;
}
else
{
printf("Error\n");
i = 1;
}
return (i);
}
