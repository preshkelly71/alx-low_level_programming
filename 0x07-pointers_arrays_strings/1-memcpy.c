#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
	dest[d] = src[d];
	}
	return (dest);
}
