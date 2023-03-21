#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet 10 times in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int letter;
	int count = 0;
	
	while (count<10)
	{
	    
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	count++;
	}
}
