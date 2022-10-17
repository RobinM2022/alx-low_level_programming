#include <stdio.h>

/**
  * main - prints the alphabet in lowercase,
  * followed by a newline,
  * except letters q and e
  * Return: 0 always when successful
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}

