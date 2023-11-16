#include <stdio.h>

void first_main(void) __attribute__ ((constructor));

/**
 * first_main - prints a sentence before the first  main
 * function is executed
 */
void first_main(void)
{
	printf("A tortoise, having pretty good sense of a hare's nature,\n");
	printf(" challenges one to a race.\n");
}
