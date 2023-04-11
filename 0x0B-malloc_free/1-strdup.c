#include "main.h"
#include <stdlib.h>

/*
 *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string of the pointer
 *
 * Return: a pointer to the duplicated string,
 * NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	int i, len = 0;
	char *new_str = (char *)malloc((sizeof(char)) * (len + 1));

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	new_str[len] = '\0';

	return (new_str);
}
