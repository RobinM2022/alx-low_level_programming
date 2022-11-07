#include <stdio.h>
#include "main.h"
/**
  * main - prints the program name, folloed by a new line
  * @argc: the number of arguments passed to the command line
  * @argv: pointer to an array of char pointers
  *
  * Return: 0 when successful.
  */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s.\n", argv[0]);
	return (0);
}
