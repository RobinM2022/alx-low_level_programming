#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc.
  * @b: The number of bytes to be allocated.
  *
  * Return: A pointer to the allocated memory
  *	    If malloc fails, termination occurs with a status value of 98.
  */
void *malloc_checked(unsigned int b)
{
	void *mem1;

	mem1 = malloc(b);

	if (mem1 == NULL)
		exit(98);

	return (mem1);
}
