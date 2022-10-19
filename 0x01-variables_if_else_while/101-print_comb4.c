#include <stdio.h>

/**
  * main - prints all possible different combinations of three digits
  *
  * Return: 0 always when successful
  */
int main(void)
{
	int n, m, o;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (o = m + 1; o < 10; o++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((o % 10) + '0');

				if (n == 7 && m == 8 && o == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
