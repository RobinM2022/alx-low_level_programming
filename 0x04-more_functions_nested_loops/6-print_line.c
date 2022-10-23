#include "main.h"

/**
  * print_line - prints a straight line in the terminal
  * @n: The number of times the character is _ printed
  *
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
