#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Description:
 * str_concat concatenates two strings, s1 and s2, into a new string.
 * If either s1 or s2 is NULL, it is treated as an empty string.
 * The new string is allocated dynamically and must be freed when done.
 *
 * Return: Pointer to the concatenated string, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, ck;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = ck = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[ck] != '\0')
		ck++;

	conct = malloc(sizeof(char) * (k + ck + 1));

	if (conct == NULL)
		return (NULL);

	k = ck = 0;
	while (s1[k] != '\0')
	{
		conct[k] = s1[k];
		k++;
	}

	while (s2[ck] != '\0')
	{
		conct[k] = s2[ck];
		k++, ck++;
	}

	conct[k] = '\0';
	return (conct);
}
