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
	while (*haystack != '\0')
	{
		char *every = haystack;
		char *ptr = needle;

		while (*ptr == *haystack && *ptr != '\0' && *haystack != '\0')
		{
			haystack++;
			ptr++;
		}
		if (*ptr == '\0')
		{
			return (every);
		}
		haystack = every + 1;
	}
	return (NULL);
}
