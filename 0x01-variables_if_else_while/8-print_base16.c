#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
putchar(i + '0');
if (i > 9)
{
putchar('a' + (i - 10));
}
}
putchar('\n');
/* returning 0 */
return (0);
}
