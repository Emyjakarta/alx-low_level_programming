#include "main.h"
#include <stdlib.h>
/**
 * str_concat-a function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by
 * the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * Return:pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length, Q = 0, R = 0, S = 0, T = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[Q] != '\0')
	{
		Q++;
	}
	while (s2[R] != '\0')
	{
		R++;
	}
	length = Q + R + 1;
	ptr = malloc(length);
	if (ptr == NULL)
		return (NULL);
	while (S < Q)
	{
		ptr[S] = s1[S];
	}
	while (T < R)
	{
		ptr[S] = s2[T];
	}
	ptr[length] = s2[T];
	return (ptr);
}
