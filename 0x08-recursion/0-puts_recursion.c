#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Description: This function prints each character of a string
 * recursively until it reaches the end of the string, at which
 * point it prints a newline character.
 */
void _puts_recursion(char *s)
{
    if (s == '\0')/* Base case: if the current character is the null terminator */
    {
        _putchar('\n'); /* Print a newline */
        return;
    }

    _putchar(s); /* Print the current character */
    _puts_recursion(s + 1); /* Recur with the next character */
}
