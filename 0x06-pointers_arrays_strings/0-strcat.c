#include "main.h"

/**
  * _strcat - concatenates two strings.
  * @dest: Character string to concatenate.
  * @src: Character string..
  * Return: A pointer to the resulting strirng dest.
  */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}

