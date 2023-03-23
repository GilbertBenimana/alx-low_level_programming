#include "main.h"

/**
 * more_numbers - print numbers
 * Description: prints numbers from 0 to 14 10 times
 * Return: No return
 */

void more_numbers(void)
{
int i;
int j;
while (i < 10)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
}
_putchar('\n');
i++;
}
}

