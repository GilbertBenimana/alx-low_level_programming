#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar("\n");
/* returning 0 */
return (0);
}
