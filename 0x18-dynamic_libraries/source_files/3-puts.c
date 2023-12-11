#include "main.h"
/**
 * _puts-a function that prints a string,
 * followed by a new line, to stdout.
 * @str: string variable
 * Return:void
 */
void _puts(char *str)
{
	int Q;

	for (Q = 0; str[Q] != '\0'; Q++)
	{
		_putchar(str[Q]);
	}
	_putchar('\n');

}
