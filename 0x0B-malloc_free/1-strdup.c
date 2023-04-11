#include "main.h"
#include <stdlib.h>

/*
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string of the pointer
 *
 * Return: a pointer to the duplicated string,
 * NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char* new_str = (char* malloc(len + 1));

	if (str == NULL)
		return (NULL);
	if (new_str == NULL)
		return (NULL);
	
	memcpy(new_str,str,len + 1);
	return (new_str);
}	
