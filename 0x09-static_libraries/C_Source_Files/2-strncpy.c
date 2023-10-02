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
	int R = 0;

	while (src[R] != '\0' && R < n)
	{
		dest[R] = src[R];
		R++;
	}
	while (n > R)
	{
		dest[R] = '\0';
		R++;
	}
	return (dest);
}
