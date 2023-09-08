#include <stdio.h>
/**
 * main-print all possible combination
 * of numbers using putchar and separate
 * each with a comma
 * Return:Always 0 (Success)
 */
int main(void)
{
	int Q;
	int R;

	for (Q = 48; Q <= 57; Q++)
	{
		for (R = 48; R <= 57; R++)
		putchar(Q);
		putchar(',');
		putchar(' ');
		putchar(R);
		putchar('\n');
	}
		return (0);
}

