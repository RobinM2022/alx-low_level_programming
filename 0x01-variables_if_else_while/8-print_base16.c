#include <stdio.h>

/**
  * main - prints all the numbers of base 16 in lowercase,
  * followed by a newline
  * Return: 0 always when successful
  */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}



