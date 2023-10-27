#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int numArgs;
	(void)argv; /* To avoid "unused parameter" warning */

	numArgs = argc - 1; /* Subtract 1 to exclude the program name itself */

	printf("%d\n", numArgs);

	return (0);
}
