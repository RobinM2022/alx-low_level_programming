#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @s: The string to print
  * mv is the first count to the end
  * re is the reverse print
  */
void print_rev(char *s)
{
	int mv = 0;
	int i, re;

	for (i = 0; s[i] != '\0'; i++)
	{
		mv++;
	}

	for (re = (mv - 1); re >= 0; re--)
	{
		_putchar(s[re]);
	}
	_putchar('\n');
}
