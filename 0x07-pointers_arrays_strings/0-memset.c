#include "main.h"
/**
 * _memset-a function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: total number of bytes
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
