#include "main.h"
/**
 * puts_half-a function that prints half
 * of a string, followed by a new line.
 * @str: variable of string
 * Return:void
 */
void puts_half(char *str)
{
	int Q;

	for (Q = 0; str[Q] != '\0'; Q++)
	{
	}
	Q++;
	for (Q /= 2; str[Q] != '\0'; Q++)
	{
		_putchar(str[Q]);
	}
	_putchar('\n');
}
