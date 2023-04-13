#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of pointer
 *
 * Return:  pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	int i, j, len1, len2;

	i = j = len1 = len2 = 0;
	/*null string is passed*/
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/*counting the length of the string*/
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		conc = malloc(sizeof(char) * (len + n + 1));
	else
		conc = malloc(sizeof(char) * (len + len2 + 1));

	if (conc == NULL)
		return (NULL);

	while (i < len1)
	{
		conc[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		conc[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		conc[i++] = s2[j++];

	conc[i] = '\0';
	return (conc);
