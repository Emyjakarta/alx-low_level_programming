#include "main.h"
/**
 * string_toupper-a function that changes all lowercase
 * letters of a string to uppercase
 * @Q: character to be updated
 * Return:subtract 32 from the ASCII value of the letter
 */
char *string_toupper(char *Q)
{
	int R;

	for (R = 0; Q[R] != '\0'; R++)
	{
		if (Q[R] > 96 && Q[R] < 123)
		{
			Q[R] -= 32;
		}
	}
	return (Q);
}
