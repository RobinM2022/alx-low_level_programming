#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: the number of command line arguments
  * @argv: pointer to array of strings passed to the command line
  * Return: 0 when sucessful.
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
