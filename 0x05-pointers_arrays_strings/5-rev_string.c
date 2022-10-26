#include "main.h"

/**
  * rev_string - reverses a string
  * @s: The string to reverse
  * Return: string in reverse
  */
void rev_string(char *s)
{
	char rev = s[0];
	int mv = 0;
	int i;

	while (s[mv] != '\0')
	{
		mv++;
	}

	for (i = 0; i < mv; i++)
	{
		mv--;
		rev = s[i];
		s[i] = s[mv];
		s[mv] = rev;
	}

}
