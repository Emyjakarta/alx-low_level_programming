#include <stdio.h>
/**
 * main-print all possible combinations of
 * two digits without repeating any combination
 * using putchar
 * Return:Always 0 (Success)
 */
int main(void)
{
	int Q;
	int R;

	for (Q = 48; Q < 57; Q++)
	{
		for (R = 49; R <= 57; R++)
		{
			if (R > Q)
			{
				putchar(Q);
				putchar(R);
				if (Q <= 56 || R <= 57)
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
