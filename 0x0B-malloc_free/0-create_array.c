#include "main.h"
#include <stdlib.h>

/**
  * *create_array - creates an array of chars, and 
  *		     initializes it with a specific character
  * @size: The size of the array to be initialized
  * @c: The specific char to initialize the array with
  *
  * Return: NULL if size == 0 or the function fails
  * 	    otherwise a pointer to the array.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		a[x] = c;

	return (a);
}
