#include "main.h"
/**
 * times_table-a function that prints
 * the 9 times table, starting with 0
 * Return:void
 */
void times_table(void)
{
	int Q;
	int R;
	int S;

	for (Q = 0; Q <= 9; Q++)
	{
		_putchar('0');
		for (R = 1; R <= 9; R++)
		{
			_putchar(',');
			_putchar(' ');

			S = Q * R;
			if (S <= 9)
			{
				_putchar(' ');
			}
			else
			_putchar((S / 10) + '0');
			_putchar((S % 10) + '0');

		}
	_putchar('\n');
	}
}
