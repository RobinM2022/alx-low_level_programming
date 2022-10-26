#include "main.h"

/**
 * put_half - prints half a string, followed by a new line.
 * @str: The input
 * if odd number len, n = (length_of_the_string - 1) /2
 */
void put_half(char *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
