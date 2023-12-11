#include "main.h"
/**
 * _strpbrk-a function that searches a string
 * for any of a set of bytes.
 * @s: string to be searched
 * @accept: substring to be matched
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int Q, R;
	char *ptr;

	Q = 0;
	while (s[Q] != '\0')
	{
		R = 0;
		while (accept[R] != '\0')
		{
			if (accept[R] == s[Q])
			{
				ptr = &s[Q];
				return (ptr);
			}
			R++;
		}
		Q++;
	}
	return (0);
}
