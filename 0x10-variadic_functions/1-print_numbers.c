#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_numbers - prints numbers, followed by a newline.
  * @n: The number of integers passed to the function.
  * @separator: The string to be printed.
  *
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
