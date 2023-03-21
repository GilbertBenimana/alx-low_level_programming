#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
/* print alphabet function */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
