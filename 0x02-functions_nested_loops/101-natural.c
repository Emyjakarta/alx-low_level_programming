#include <stdio.h>
/**
 *  main-program that computes and prints
 *  the sum of all the multiples of 3 or
 *  5 below 1024 (excluded), followed by a new line
 *  Return:Always 0 (Success)
 */
int main(void)
{
	int Q;
	int R = 0;

	for (Q = 1; Q < 1024; Q++)
	{
		if (Q % 3 == 0 || Q % 5 == 0)
		{
			R += Q;
		}

	}
	printf("%i\n", R);
	return (0);
}
