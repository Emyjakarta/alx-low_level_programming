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
	char alpha[] = "aAeEoOtTlL";
	char update[] = "4433007711";

	for (R = 0; Q[R] != '\0'; R++)
	{
		for (S = 0; S < 10; S++)
		{
			if (Q[R] == alpha[S])
			{
				Q[R] = update[S];
			}
		}
	}
	return (Q);
}
