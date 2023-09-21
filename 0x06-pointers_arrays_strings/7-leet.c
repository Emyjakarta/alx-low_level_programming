#include "main.h"
/**
 * leet-function that encodes a string into 1337
 * @Q: string to be updated
 i* Return:The updated string
 */
char *leet(char *Q)
{
	int R, S;
	char *alpha = "aAeEoOtTlL";
	char *update = "4433007711";

	R = 0;

	while (Q[R] != '\0')
	{
		S = 0;
		while (alpha[S] != '\0')
		{
			if (Q[R] == alpha[S])
			{
				Q[R] = update[S];
				break;
			}
			S++;
		}
		R++;
	}
	return (Q);
}
