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

	for (Q = 48; Q <= 57; Q++)
	{
		putchar(Q);
		if (Q != 57)
		putchar(',');
		putchar(' ');
	}
		return (0);
}

