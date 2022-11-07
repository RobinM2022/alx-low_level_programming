#include <stdio.h>

/**
  * main - prints the program name, followed by a new line
  * @argc: the number of arguments passed to the command line
  * @argv: pointer to an array of char pointers
  *
  * Return: 0 when successful.
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
