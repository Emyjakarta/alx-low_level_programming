#include "main.h"
/**
 * _strstr-a function that locates a substring.
 * @haystack: string to searched
 * @needle: substring to be located
 * Return:a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int Q, R, S;

	Q = 0;
	S = 0;

	while (haystack[Q] != '\0')
	{
		R = 0;
		while (needle[R + S] != '\0' && haystack[Q + S] != '\0'
				&& needle[R + S] == haystack[Q + S])
		{
			if (haystack[Q + S] != needle[R + S])
			{
				break;
			}
			S++;
		}
		if (needle[R + S] == '\0')
		{
			return (&haystack[Q]);
		}
		R++;
		Q++;
	}
	return (NULL);
}
