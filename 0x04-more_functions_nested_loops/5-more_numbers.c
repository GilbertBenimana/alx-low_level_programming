#include <stdio.h>

/**
 * more_numbers - print numbers
 * Description: prints numbers from 0 to 14 10 times
 * Return: No return
 */

void main(void)
{
int i;
int j;
while (i < 10)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
putchar(j / 10 + '0');
}
putchar(j % 10 + '0');
}
putchar('\n');
i++;
}
}

