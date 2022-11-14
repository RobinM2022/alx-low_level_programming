#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * Return: NULL if concatenation fails,
 * otherwise, return a pointer to the newly-allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int en1, en2, i, lim;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (en1 = 0; s1[en1] != '\0'; en1++)
		;

	for (en2 = 0; s2[en2] != '\0'; en2++)
		;

	ar = malloc(sizeof(char) * (en1 + en2 + 1));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (i = 0; i < en1; i++)
		ar[i] = s1[i];

	lim = en2;
	for (en2 = 0; en2 <= lim; i++, en2++)
		ar[i] = s2[en2];

	return (ar);
}
