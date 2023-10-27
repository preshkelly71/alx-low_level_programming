#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @h: Function parameter
  *
  * Return: Always o.
  */
char *_strchr(char *s, char h)
{
	int l;

	for (l = 0; s[l] >= '\0'; l++)
	{
	if (s[l] == h)
	return (s + l);
	}
	return (0);
}
