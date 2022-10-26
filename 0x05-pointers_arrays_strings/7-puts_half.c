#include "main.h"

/**
  * put_half - prints half a string, followed by a new line.
  * @str: The input
  * if odd number of characters, print (length -1) /2
  */
void put_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{

		_putchar(str[i]);
	}

	_putchar('\n');

}
