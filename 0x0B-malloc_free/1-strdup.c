#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Returns a pointer to a newly allocated space in memory,
  * containing a copy of the string given as a parameter.
  * @str: The string to be copied.
  * Return: NULL if str == NULL or insufficient memory is available
  *	    Otherwise, a pointer to the duplicated string.
  */
char *_strdup(char *str)
{
	char *a;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		a[i] = str[i];

	a[j] = '\0';

	return (a);
}
