#include "dog.h"
#include <stdlib.h>
#include <studio.h>

/**
 * print_dog - prints a structure of type dog
 * @d: pointer to the structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name = name)
			printf("Name is %s\n", d->name);
		else
			printf("Name: (nil)");
		if (d->age = age)
			printf("Age: %.6f\n", d->age);
		else 
			printf("Age: (nil)";
		if (d->owner = owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
