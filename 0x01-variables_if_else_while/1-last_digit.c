#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-Entry point
 * Print the last digit of the numbers
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int B = n % 10;
	const char *C = "is";
	const char *D = "and is greater than 5";
	const char *E = "and is 0";
	const char *F = "and is less than 6 and not 0";

	if (B > 5)
	{
		printf("Last digit of %i %s %i %s \n", n, C, B, D);
	}
	else if (B == 0)
	{
		printf("Last digit of %i %s %i %s \n", n, C, B, E);
	}
	else if (B < 6)
	{
		printf("Last digit of %i %s %i %s \n", n, C, B, F);
	}
	else
		printf("You have entered an invalid number\n");
	return (0);
}
