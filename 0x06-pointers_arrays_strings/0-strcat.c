#include "main.h"
/**
 * _strcat-This function appends the src string to
 * the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds
 * a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return:a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int Q;
	int R;

	for (Q = 0; dest[Q] != '\0'; Q++)
	{
	}
	for (R = 0; src[R] != '\0'; R++)
	{
		dest[Q] = src[R];
		Q++;
	}
	dest[Q] = '\0';
	return (dest);
}
