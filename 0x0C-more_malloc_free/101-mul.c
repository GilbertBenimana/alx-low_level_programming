#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: array of passed arguments
 * Description: multiplies two positive numbers.
 * Return: Nothing
 */
int main(int argc, char **argv)
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
if (isdigit(argv[1]) || isdigit(argv[2]))
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
}
