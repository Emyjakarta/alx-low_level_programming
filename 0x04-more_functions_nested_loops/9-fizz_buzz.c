#include <stdio.h>
/**
 * main-a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five
 * print Buzz. For numbers which are multiples of both three
 * and five print FizzBuzz.
 * @Q: variable that contains numbers 1 to 100
 * Return:Always 0 (Success)
 */
int main(int Q)
{
	for (Q = 1; Q <= 100; Q++)
	{
		if ((Q % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((Q % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((Q % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%lu ", Q);
	}
	printf("\n");
	return (0);
}
