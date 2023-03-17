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
for (num = 0; num <= 9; num++)
{
for (n = num + 1; n <= 9; n++)
{
putchar(num + '0');
putchar(n + '0');
if (num != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
/* returning 0 */
return (0);
}
