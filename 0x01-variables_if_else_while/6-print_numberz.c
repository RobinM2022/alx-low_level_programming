#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10,
  * starting from 0,
  * followed by a new line
  * only the putchar function is allowed
  * the use of any variable of type char is not allowed
  * Return: 0 always when successful
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
