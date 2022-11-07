#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: the number of command line arguments received
  * @argv: pointer to an array of pointer characters
  * Return: 0 when successful.
  */

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		printf("%s\n", argv[0]);
		printf("\n");
	}
	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
