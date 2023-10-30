#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command line arguments into a string
 * @ck: number of arguments
 * @bm: array of argument strings
 *
 * Description:
 * argstostr takes the command line arguments (bm) and concatenates them into
 * a single string, separated by newline characters.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ck, char **bm)
{
	int z, n, r = 0, l = 0;
	char *str;

	if (ck == 0 || bm == NULL)
		return (NULL);

	for (z = 0; z < ck; z++)
	{
		for (n = 0; bm[z][n]; n++)
			l++;
	}

	l += ck;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	for (z = 0; z < ck; z++)
	{
		for (n = 0; bm[z][n]; n++)
		{
			str[r] = bm[z][n];
			r++;
		}

		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}

	return (str);
}
