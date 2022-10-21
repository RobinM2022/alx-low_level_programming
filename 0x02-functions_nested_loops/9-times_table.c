#include "main.h"

/**
  * times_table - a function prints the 9 times table,
  * starting with 0.
  * j = row, k = column, d = the result
  */
void times_table(void)
{
	int j, k, l;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');

		for (k = 1; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');

			l = j * k;

			if (l <= 9)
				_putchar(' ');
			else
				_putchar((l / 10) + '0');
		}
		_putchar('\n');
	}
}


