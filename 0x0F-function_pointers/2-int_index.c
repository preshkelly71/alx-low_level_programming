#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @cmp: A pointer to the comparison function to determine a match.
 *
 * Return: The index of the first match, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
