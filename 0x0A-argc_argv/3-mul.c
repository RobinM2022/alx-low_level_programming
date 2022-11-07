#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the multiplication of two integers, followed by a new line.
  * @argc: the number of arguments supplied to the program.
  * @argv: An array of pointers to the arguments.
  * Return: 1 if the program does not receive two arguments
  *	    0 if the program receives two arguments
  */

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
