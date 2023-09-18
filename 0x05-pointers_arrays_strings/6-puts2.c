#include "main.h"
/**
 * puts2-a function that prints every other character 
 * of a string, starting with the first character, 
 * followed by a new line.
 * @str: string variable.
 * Return:void
 */
void puts2(char *str)
{
	int Q;

	for (Q = 0; str[Q] != '\0'; Q += 2)
	{
		_putchar(str[Q]);
	}
	_putchar('\n');
	
}
