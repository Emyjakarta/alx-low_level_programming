#include <stdio.h>
/**
 * main-program that prints all possible
 * combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits.
 * 1 should be printed as 01
 * The combination of numbers must be separated
 * by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same
 * combination of the numbers 0 and 1
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * Return:Always 0 (Success)
 */
int main(void)
{
	int Q;
	int R;

	for (Q = 0; Q < 100; Q++)
	{
		for (R = 0; R < 100; R++)
		{
			if (Q < R)
			{
				putchar((Q / 10) + 48);
				putchar((Q % 10) + 48);
				putchar(' ');
				putchar((R / 10) + 48);
				putchar((R % 10) + 48);
				if (Q != 98 || R != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}


	}
	putchar('\n');
	return (0);
}

