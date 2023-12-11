#include "main.h"
/**
 * _strlen-a function that returns the length of a string.
 * @s: variable that represents the string
 * Return:void
 */
int _strlen(char *s)
{
	int Q = 0;

	while (s[Q] != '\0')
	{
		Q++;
	}
	return (Q);
}
