#include "main.h"
/**
 * _strncat-a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: maximum bytes to be used
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int Q;
	int R = 0;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (Q = 0; n > Q, dest[Q] != '\0'; Q++)
	{
	}
	while (src[R] != '\0')
	{
		if (n < length)
		{
			dest[Q] = src[R] - n;
			Q++;
			R++;
		}
		else if (n > length)
		{
			dest[Q] = src[R];
			Q++;
			R++;
		}
		dest[Q] = '\0';
		return (dest);
	}
}
