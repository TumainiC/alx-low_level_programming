#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase then a new line ten times
 *
 * Return : Always 0
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar ('\n');
	}
}
