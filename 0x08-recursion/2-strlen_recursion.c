#include "main.h"

/**
 * _strlen_recurion - prints length of a string
 * @s: string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recurion(s + 1);
	}
	return(i);
}
