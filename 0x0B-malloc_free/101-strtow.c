#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a strg
 * @d: strg to evaluate
 *
 * Description:
 * count_word counts the number of word in a given strg by
 * looking for space characters.
 *
 * Return: The number of words.
 */
int count_word(char *d)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; d[c] != '\0'; c++)
	{
		if (d[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a strg into word
 * @str: strg to split
 *
 * Description:
 * strtow take a strg and split it into individual word
 * allocating memory for each word.
 *
 * Return: Pointer to an array of strings (Success), or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int v, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (v = 0; v <= len; v++)
	{
		if (str[v] == ' ' || str[v] == '\0')
		{
			if (c)
			{
				end = v;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = v;
	}

	matrix[k] = NULL;

	return (matrix);
}
