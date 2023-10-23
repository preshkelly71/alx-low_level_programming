#include "main.h"

/**
  * print_chessboard - main function
  *
  * @c: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*c)[8])
{
	int m;
	int o;

	for (m = 0; m < 8; m++)
	{
	for (o = 0; o < 8; o++)
	_putchar(c[m][o]);
	_putchar('\n');
		}
		}
