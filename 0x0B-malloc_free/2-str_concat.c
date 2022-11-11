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
	int en1, en2, i = 0;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (en1 = 0; en1 <= *s1; en1++)
	{
	}

	for (en2 = 0; en2 <= *s2; en2++)
	{
	}

	ar = malloc(sizeof(char) * (en1 + en2 + 1));

	if (ar == NULL)
		return (NULL);

	while (*s1)
	{
		ar[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		ar[i] = *s2;
		i++;
		s2++;
	}
	return (ar);
}
