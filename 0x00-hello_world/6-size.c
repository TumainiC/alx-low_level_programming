#include <stdio.h>
/**
 * main -Print sizes of datatypes
 *
 * Return: 0
*/
intmain(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of character: %lu byte (S)\n", (unsigned long)sizeof(c));
	printf("Size of integer: %lu byte (S)\n", (unsigned long)sizeof(i));
	printf("Size of long integer: %lu byte (S)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu byte (S)\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu byte (S)\n", (unsigned long)sizeof(f));
	return (0);
}
