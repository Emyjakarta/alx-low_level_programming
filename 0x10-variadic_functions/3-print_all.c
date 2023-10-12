#include "variadic_functions.h"
/**
 * print_all-a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 * Return:void
 */
void print_all(const char *const format, ...)
{
	int count;
	char *string, *separator;
	va_list ptr;

	va_start(ptr, format);
	separator = "";
	count = 0;
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ptr, double));
				break;
			case 's':
				string = va_arg(ptr, char *);
				if (string == NULL)
					printf("(nil)");
				printf("%s%s", separator, string);
				break;
			default:
				count++;
				continue;
		}
		separator = ", ";
		count++;
	}
	printf("\n");
	va_end(ptr);
}
