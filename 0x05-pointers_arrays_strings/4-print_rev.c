#include "main.h"
/**
 * print_rev-a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string variable
 * Return:void
 */
void print_rev(char *s)
{
	int Q;
	int R;

	for (Q = 0; s[Q] != '\0'; Q++)
	{
	}

	for (R = Q - 1; R >= 0; R--)
	{
		_putchar(s[R]);
	}
	_putchar('\n');
}
