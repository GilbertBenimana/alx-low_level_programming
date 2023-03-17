#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(tolower(letter));
}
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(toupper(letter));
}
putchar("\n");
/* returning 0 */
return (0);
}
