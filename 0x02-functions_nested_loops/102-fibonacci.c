#include <stdio.h>
/**
 * main-a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long Q = 0;
	unsigned long R = 1;
	unsigned long Add;

	for (i = 0; i < 50; i++)
	{
		Add = Q + R;

		printf("%lu"; Add);
		Q = R;
		R = Add;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}


	return (0);
}
