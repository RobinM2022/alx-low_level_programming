#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: input
  * Return: -1 if the n is < 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}


