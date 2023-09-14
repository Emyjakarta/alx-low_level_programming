#include <stdio.h>
/**
 * main-a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc,
 * pointers, arrays/tables, or structures
 * You are not allowed to hard code any Fibonacci
 * number (except for 1 and 2)
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long Q, R, S;

	Q = 0;
	R = 1;

	for (i = 0; i < 98; i++)
	{
		S = Q + R;
		Q = R;
		R = S;
		printf("%lu", S);
		if (i != 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
