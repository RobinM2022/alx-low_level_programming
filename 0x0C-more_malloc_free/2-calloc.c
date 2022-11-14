#include "main.h"
#include <stdlib.h>

/**
  * _calloc -allocates memory for an array of elements
  * @nmemb: The number of elements.
  * @size: The byte size of each element.
  * Return: NULL if nemb = 0, size = 0 or function fails
  *         Otherwise, a pointer to the allocated memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < (nmemb * size); n++)
		ptr[n] = 0;

	return (ptr);
}
