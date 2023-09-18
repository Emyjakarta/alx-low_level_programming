#include "main.h"
/**
 * puts_half-a function that prints half
 * of a string, followed by a new line.
 * @str: variable of string
 * Return:void
 */
void puts_half(char *str)
{
	int i;
	int Q = 0;
	char *T = str;

	while (*T != '\0')
	{
		Q++;
		T++;
	}
	if (Q % 2 == 0)
	{
		i = Q / 2;
	}
	else
	{
		i = (i - 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
