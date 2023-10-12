#include "variadic_functions.h"
/**
 * print_numbers-a function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int Q = 0;
	va_list ptr;

	va_start(ptr, n);
	Q = 0;
	while (n > Q)
	{
		printf("%i", va_arg(ptr, int));
		if (separator != NULL && n - 1 > Q)
			printf("%s", separator);
		Q++;
	}
	va_end(ptr);
	printf("\n");
}
