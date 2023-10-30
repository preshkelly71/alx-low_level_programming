#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a strg to a new memry
 * @str: strg to duplicate
 *
 * Description:
 * _strdup creates a new strg in memory which is a duplicate of the
 * string str. If str is NULL, it returns NULL. Memory for the new
 * strg is obtained with malloc.
 *
 * Return: Pointer to the duplicate strg, NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *aaa;
	int k, b = 0;

	if (str == NULL)
		return (NULL);

	k = 0;
	while (str[k] != '\0')
		k++;

	aaa = malloc(sizeof(char) * (k + 1));

	if (aaa == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		aaa[b] = str[b];

	return (aaa);
}
