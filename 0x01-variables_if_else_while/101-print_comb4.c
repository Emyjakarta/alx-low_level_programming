#include <stdio.h>
/**
 * main-print all possible different combinations of three digits.
 * Numbers must be separated by , followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered
 * the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * Return:Always 0 (Success)
 */
int main(void)
{
	int Q;
	int R;
	int S;

	for (Q = 48; Q < 55; Q++)
	{
		for (R = Q + 1; R < 56; R++)
		{
			for (S = R + 1; S <= 57; S++)
			{
				if (S > R && R > Q)
				{
					putchar(Q);
					putchar(R);
					putchar(S);
				}
					if (Q != 55)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
}
