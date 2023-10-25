#include "main.h"

/**
  * factorial - function parameter returns the fatorial of a number
  *
  * @n: function parameter returns the factorial
  *
  * Return: Function n.
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
