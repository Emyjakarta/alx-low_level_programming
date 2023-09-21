#include "main.h"
/**
 * _strcmp-a function that compares two strings.
 * @s1: first string variable
 * @s2: secod string variable
 * Your function should work exactly like strcmp
 * Return:Their difference and zero at the end
 */
int _strcmp(char *s1, char *s2)
{
	int Q = 0;

	while (s1[Q] != '\0' || s2[Q} != '\0')
	{
		if (s1[Q] != s2[Q])
		{
			return (s1[Q] - s2[Q]);
			Q++;
		}
	}
	return (0);
}
