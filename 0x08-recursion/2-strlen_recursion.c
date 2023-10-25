#include "main.h"

/**
  * _strlen_recursion - main function returns the length of the string
  *
  * @s: Function parameter string to be measured
  *
  * Return: Length of the string
  */
int _strlen_recursion(char *s)
{
	int lnt = 0;

	if (*s)
	{
	lnt++;
	lnt += _strlen_recursion(s + 1);
	}
	return (lnt);
}
