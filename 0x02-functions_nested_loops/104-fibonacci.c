#include <stdio.h>
/**
 * main-a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return:Always 0 (Success)
 */
int main(void)
{
	unsigned long i, Q, R, Q1, Q2, R1, R2;

	Q = 1;
	R = 2;

	printf("%lu", Q);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", R);
		R = R + Q;
		Q = R - Q;
	}

		Q1 = Q / 1000000000;
		Q2 = Q % 1000000000;
		R1 = R / 1000000000;
		R2 = R % 1000000000;

		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", R1 + (R2 / 1000000000));
			printf("%lu", R2 % 1000000000);
			R1 = R1 + Q1;
			Q1 = R1 - Q1;
			R2 = R2 + Q2;
			Q2 = R2 - Q2;
		}

		printf("\n");
		return (0);
}
