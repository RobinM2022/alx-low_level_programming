#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int k = 0, i = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		k = rand() % 128;
		if ((i + k) > 2772)
			break; 
		i = i + k;
		printf("%c", k);
	}
	printf("%c\n", (2772 - i));
	return (0);
}

