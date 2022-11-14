#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: Pointer to memory previously allocated.
  * @old_size: The size in bytes of the allocated space for ptr.
  * @new_size: The size in bytes for the new memory block.
  *
  * Return: ptr if new_size == old_size
  *         NULL if new_size == 0 && ptr != 0
  *         Otherwise, a pointer to the reallocated memory block.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
