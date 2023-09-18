#include "main.h"
/**
 * rev_string- a function that reverses a string.
 * @s: string variable
 * Return:void
 */
void rev_string(char *s)
{
	int Q, R, S;
	char T;

	for (Q = 0; s[Q] != '\0'; Q++)
	{
	}
	for (R = 0, S = Q - 1; R < S; ++R, --S)
	{
		T = s[R];
		s[R] = s[S];
		s[S] = T;
	}
}
