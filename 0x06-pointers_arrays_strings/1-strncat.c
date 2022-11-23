#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: String to concatenate from.
  * @src: String to concatenate.
  * @n: Number of elements to concatenate in.
  *
  * Return: A pointer to the resulting dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}

	return (dest);
}
