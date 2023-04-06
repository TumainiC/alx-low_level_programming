#include "main.h"

/**
 * void _print_rev_recursion - print a string backwards
 * @s:string
 * Return:void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursions(s + 1);
		_putchar('\n');
	}
}