#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}
