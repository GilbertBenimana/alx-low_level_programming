#include "main.h"

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
/**
 *alphabet function 
 *that print out all letters
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
