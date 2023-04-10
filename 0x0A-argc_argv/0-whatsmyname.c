#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: prints its name, followed by a new line
 * Return: Return 0 for success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
