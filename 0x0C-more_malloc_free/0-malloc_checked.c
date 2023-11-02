#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for NULL.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointr to the allocated memory. Exit with status 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
