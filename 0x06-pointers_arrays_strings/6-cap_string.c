#include "main.h"
/**
 * cap_string-a function that capitalizes all words of a string
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @Q: string to be updated
 * Return:Q
 */
char *cap_string(char *Q)
{
	int R, S, T;
	char U[] = ",;.!?(){}\n\t\" ";

	for (R = 0, T = 0; Q[R] != '\0'; R++)
	{
		if (Q[0] > 96 && Q[0] < 123)
			T = 1;
		for (S = 0; U[S] != '\0'; S++)
		{
			if (U[S] == Q[R])
				T = 1;
		}
		if (T)
		{
			if (Q[R] > 96 && Q[R] < 123)
			{
				Q[R] -= 32;
				T = 0;
			}
			else if (Q[R] > 64 && Q[R] < 91)
				T = 0;
			else if (Q[R] > 47 && Q[R] < 58)
				T = 0;
		}
	}
	return (Q);
}

