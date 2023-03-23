#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the charactr is uppercase.
 *@c: character to be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int letter;

	if (letter <= 'A' && letter >= 'Z')
		return (1);
	else
		return (0);
}
