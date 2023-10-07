#include "main.h"
#include <stdlib.h>
/**
 * lenstr-length of string
 * @str: string
 * Return:length of string
 */
size_t lenstr(char *str)
{
	size_t Q;

	for (Q = 0; str[Q] != '\0'; Q++)
		return (Q);
}
/**
 * string_nconcat-a function that concatenates two strings.
 * The returned pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes allocated for s2
 * Return:newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1len, s2len, R;
	char *concat, p;

	s1len = lenstr(s1);
	s2len = lenstr(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2len)
		n = s2len;
	concat = malloc(s1len + n + 1);
	if (concat == NULL)
		return (NULL);
	p = concat;
	while (s1 != '\0')
	{
		*p++ = *s1++;
	}

	R = 0;
	while (n > R)
	{
		*p++ = *s2++;
		R++;
	}
	*p = '\0';
	return (concat);
}
