#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers, from min to max
  * @min: The minmum input.
  * @max: The maximum input.
  *
  * Return: NULL if min > max or function fails
  *         Otherwise, a pointer to the created array.
  */
int *array_range(int min, int max)
{
	int *arr;
	int len;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (len = 0; min <= max; len++, min++)
		arr[len] = min;

	return (arr);
}
