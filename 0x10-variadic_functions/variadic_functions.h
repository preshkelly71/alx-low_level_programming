#ifndef _VARIADIC_H_
#define _VARIADIC_H_

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written. On error, -1.
 */
int _putchar(char c);

/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of parameters.
 * @...: Variable number of arguments to be summed.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers, separated by a given separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of parameters.
 * @...: Variable number of arguments to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings, separated by a given separator.
 * @separator: The string to be printed between strings.
 * @n: The number of parameters.
 * @...: Variable number of arguments to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints anything based on the format specifier.
 * @format: A string of format specifiers.
 * @...: Variable number of arguments to be printed.
 */
void print_all(const char * const format, ...);

#endif
