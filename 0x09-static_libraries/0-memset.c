#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @d: The value used to fill the memory
  *
  * @s: Function paramater
  *
  * @n: Function parameter
  *
  * Return: s
  */
char *_memset(char *s, char d, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	s[c] = d;
	return (s);
}
