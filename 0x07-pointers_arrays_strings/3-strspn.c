#include "main.h"

/**
  * _strspn - main function
  *
  * @s: Function parameter
  *
  * @accept: Function parameter
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int c = 0;
	int h;

	while (*s)
	{
	for (h = 0; accept[h]; h++)
	{
	if (*s == accept[h])
	{
	c++;
	break;
	}
	else if (accept[h + 1] == '\0')
	return (c);
	}
	s++;
	}
	return (c);
}
