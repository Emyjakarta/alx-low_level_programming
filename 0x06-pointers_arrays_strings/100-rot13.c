#include "main.h"
/**
 * rot13-a function that encodes a string using rot13.
 * @Q: string to be encoded
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * Return:Encoded string
 */
char *rot13(char *Q)
{
	char *initial = Q;
	char *latest = Q;

	while (*initial != '\0')
	{
		while (*latest != '\0')
		{
			if ((*initial >= 'a' && *initial <= 'm')
				|| (*initial >= 'A' && *initial <= 'M'))
			{
				*latest = *initial + 13;
			}
			else if ((*initial >= 'n' && *initial <= 'z')
				|| (*initial >= 'N' && *initial <= 'Z'))
			{
				*latest = *initial - 13;
			}
			else
			{
				*latest = *initial;
			}
			initial++;
			latest++;
		}
		initial++;
		latest++;
	}
	*latest = '\0';
	return (Q);
}
