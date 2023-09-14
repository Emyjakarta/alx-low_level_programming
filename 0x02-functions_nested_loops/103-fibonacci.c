#include <stdio.h>
/**
 * main-a program that finds and prints
 * the sum of the even-valued terms of
 * a fibonacci sequence
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long Q, R, S, T;

	Q = 0;
	R = 1;
	long Total = 0;

	for (i = 0; i < 33; i++)
	{

		S = Q + R;
		Q = R;
		R = S;

		T = S % 2;
		if (T == 0)
		{
			Total += S;
		}
		if (i == 32)
		{
			printf("\n");
		}

	}

	printf("%lu\n", Total);
	return (0);
}
