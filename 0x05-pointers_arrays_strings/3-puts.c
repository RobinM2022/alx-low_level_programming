#include "main.h"

/**
  * _puts - prints a string, followed by a new line, to stdout.
  * @str: The string to print
  *
  */
void _puts(char *str)
{
	int n;

	n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
