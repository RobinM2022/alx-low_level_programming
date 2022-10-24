#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,
 * if the number is a multiple of 3 and 5, it prints FizzBuzz
 * if the number is a multiple of 5, it prints Buzz
 * if the number is a multiple of 3, it prints Fizz
 * Return: 0 if sucessful, otherwise non-zero
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
