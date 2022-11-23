#include "main.h"

/**
  * _strncpy = function that copies a string.
  * @dest: Destination.
  * @src: Source.
  * @n: Number of elements to be copied.
  *
  * Return: 'dest' edited string.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
