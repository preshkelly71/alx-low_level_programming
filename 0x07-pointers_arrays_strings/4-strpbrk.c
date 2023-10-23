#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int g, h;

	for (g = 0; s[g] != '\0'; g++)
	{
	for (h = 0; accept[h] != '\0'; h++)
	{
	if (s[g] == accept[h])
	return (s + g);
	}
	}
	return (0);
}
