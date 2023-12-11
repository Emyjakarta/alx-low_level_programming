#include "main.h"
/**
 * _strspn-a function that gets the length of a prefix substring.
 * @s: string
 * @accept: array to check size with
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int Q, R, S;

	Q = 0;
	R = 0;

	while (s[Q] != '\0')
	{
		S = 0;
		while (accept[S] != '\0')
		{
			if (s[Q] == accept[S])
			{
				R++;
				break;
			}
			S++;
		}
		if (accept[S] == '\0')
		{
			break;
		}
		Q++;
	}
	return (R);
}
