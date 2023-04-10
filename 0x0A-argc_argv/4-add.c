#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Description:  a program that adds positive numbers
 * Return: Return 0 for success and 1 for failure
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
int r = 0;
char j;
if (argc > 1)
{
for (j = '0'; j <= '9'; j++)
{
if (j == c)
{
isdigit = 1;
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
i = 0;
}
else
{
printf("Error\n");
i = 1;
}
return (i);
}

/**
 * _isdigit - Check if c is a digit
 * @c: An input int
 * Description: function return 1 if character is digit
 * and 0 otherwise
 * Return: 1 if is digit or 0 if is not
 */

int _isdigit(int c)
{
char i;
int isdigit = 0;

for (i = '0'; i <= '9'; i++)
{
if (i == c)
{
isdigit = 1;
}
}
return (isdigit);
}
}
