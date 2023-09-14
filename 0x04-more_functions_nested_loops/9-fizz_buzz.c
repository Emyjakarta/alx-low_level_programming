#include <stdio.h>
/**
 * main-a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five
 * print Buzz. For numbers which are multiples of both three
 * and five print FizzBuzz.
 * Return:Always 0 (Success)
 */
int main(void)
{
	int Q;

	for (Q = 1; Q <= 100; Q++)
	{
		if ((Q % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((Q % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((Q % 5) == 0)
		{
			printf("Buzz");
		}
		else
			printf("%i", Q);
		if (Q != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
