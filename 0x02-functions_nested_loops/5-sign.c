#include "main.h"

/**
 * print_sign - prints the sign of a  number.
 * @n: number of which the sign is to be printed
 *
 * Returns: 1 if number is greater than zero,
 *	    0 if number is zero,
 *	    -1 if number is smaller than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
