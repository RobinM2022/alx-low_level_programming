#include <stdio.h>

/**
  * newmain - prints a string before main function is executed.
  * Return: Nothing.
  */
void __attribute__ ((constructor)) newmain()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
