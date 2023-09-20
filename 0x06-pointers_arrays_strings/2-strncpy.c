#include "main.h"
/**
 * _strncpy-a function that copies a string
 * Your function should work exactly like strncpy
 * @dest: destination string
 * @src: source string
 * @n: maximum bytes that can be contained in the string
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int Q = 0;
	int R = 0;

	while (dest[Q] != '\0')
	{
		Q++;
	}
	while (src[R] != '\0' && R < n)
	{
		dest[Q] = src[R];
		Q++;
		R++;
	}
	dest[Q] = '\0';
	return (dest);
}
