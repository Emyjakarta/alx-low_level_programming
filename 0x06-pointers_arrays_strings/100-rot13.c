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
	int R = 0;
	int S;

	char initial[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char latest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (Q[R] != '\0')
	{
		S = 0;
		while (initial[S] != '\0')
		{
			if (Q[R] == initial[S])
			{
				Q[R] = latest[S];
				break;
			}
			S++;
		}
		R++;
	}
	return (Q);
}
