#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int num;
int n;
int j;
for (num = 0; num <= 9; num++)
{
for (n = num + 1; n <= 9; n++)
{
for (j = n + 1; j <= 9; j++)
{
putchar(num + '0');
putchar(n + '0');
putchar(j + '0');
if (num != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
/* returning 0 */
return (0);
}
