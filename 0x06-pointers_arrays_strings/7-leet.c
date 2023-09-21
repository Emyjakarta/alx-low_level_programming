#include "main.h"
/**
 * leet-function that encodes a string into 1337
 * @Q: string to be updated
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * Return: The updated string
 */
char *leet(char *Q)
{
	int R, S;
	char alpha[] = "aEeEoOtTlL";
	char update[] = "4433007711";

	R = 0;
	S = 0;

	while (Q[R] != '\0')
	{
		while (alpha[S] != '\0')
		{
			if (Q[R] == alpha[S])
			{
				Q[R] = update[S];
			}
			S++;
		}
		S = 0;
		R++;
	}
	return (Q);
}
