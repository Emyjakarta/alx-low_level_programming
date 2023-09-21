#include "main.h"
/**
 * _strcmp-a function that compares two strings.
 * @s1: first string variable
 * @s2: secod string variable
 * Your function should work exactly like strcmp
 * Return:Their difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		*s1++;
		*s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
