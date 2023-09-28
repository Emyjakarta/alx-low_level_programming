#include "main.h"
/**
 * _strlen_recursion-a function that returns the length of a string.
 * @s: string
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
	int Q;

	if (*s == '\0')
	{
		return (0);
	}
	Q = _strlen_recursion(s + 1);
	return (1 + Q);
}
