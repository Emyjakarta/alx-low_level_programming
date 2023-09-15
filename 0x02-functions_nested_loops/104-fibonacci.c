#include <stdio.h>
/**
 * main-a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long Q, R, S;
	unsigned long Qhalf1, Qhalf2, Rhalf1, Rhalf2;
	unsigned long half1, half2;

	Q = 0;
	R = 1;

	for (i = 0; i < 92; i++)
	{
		S = Q + R;
		printf("%lu, ", S);

		Q = R;
		R = S;
	}

		Qhalf1 = Q / 10000000000;
		Rhalf1 = R / 10000000000;
		Qhalf2 = Q / 10000000000;
		Rhalf2 = R / 10000000000;

		for (i = 93; i < 99; i++)
		{
			half1 = Qhalf1 + Rhalf1;
			half2 = Qhalf2 + Rhalf2;
			if (Qhalf2 + Rhalf2 > 9999999999)
			{
				half1 += 1;
				half2 %= 10000000000;
			}

			printf("%lu%lu", half1, half2);
			if (i != 98)
				printf(", ");

			Qhalf1 = Rhalf1;
			Qhalf2 = Rhalf2;
			Rhalf1 = half1;
			Rhalf2 = half2;
		}
		printf("\n");
		return (0);
}
