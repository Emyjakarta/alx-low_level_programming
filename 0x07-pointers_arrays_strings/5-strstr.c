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
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *Q = haystack;
		char *R = needle;

		while (*R != '\0' && *Q == *R)
		{
			Q++;
			R++;
		}
		if (*R == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
}
