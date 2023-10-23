#include "main.h"

/**
  * _strstr - main function
  *
  * @needle: function parameter
  *
  * @haystack: function parameter
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *q = haystack;
	char *r = needle;

	while (*q == *r && *q != '\0')
	{
	q++;
	r++;
	}
	if (*q == '\0')
	return (haystack);
	}
	return (0);
}
