#include "variadic_functions.h"
/**
 * print_strings-a function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int Q;
	va_list ptr;
	const char *string;

	va_start(ptr, n);
	Q = 0;
	while (n > Q)
	{
		string = va_arg(ptr, const char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (n - 1 > Q && separator != NULL)
			printf("%s", separator);
		Q++;
	}
	va_end(ptr);
	printf("\n");
}
