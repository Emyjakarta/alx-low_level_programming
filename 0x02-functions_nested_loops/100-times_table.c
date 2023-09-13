#include "main.h"
/**
 * print_times_table-a function that prints
 * the n times table, starting with 0
 * If n is greater than 15 or less than
 * 0 the function should not print anything
 * @n: number to be printed
 * Return:void
 */
void print_times_table(int n)
{
	int Q = 0, R, S;

	if (n > 15 || n < 0)
		return;
	while (Q <= n)
	{
		for (R = 0; R <= n; R++)
		{
			S = Q * R;
			if (S > 99)
			{
				_putchar((S / 100) + '0');
				_putchar((S / 10 % 10) + '0');
				_putchar((S % 10) + '0');
			}
			else if (S > 9)
			{
				_putchar(' ');
				_putchar((S / 10) + '0');
				_putchar((S % 10) + '0');
			}
			else if (R != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(S + '0');
			}
			else
				_putchar(S + '0');

			if (R != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		Q++;

	}
}
