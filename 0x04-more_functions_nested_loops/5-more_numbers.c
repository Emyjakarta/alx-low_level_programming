#include "main.h"
/**
 * more_numbers-a function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 * You can only use _putchar three times in your code
 * Return:void
 */
void more_numbers(void)
{
	int i;
	int Q;

	for (i = 0; i <= 9; i++)
	{
		for (Q = 0; Q <= 14; Q++)
		{
			if (Q > 9)
			{
				_putchar((Q / 10) + '0');
				_putchar((Q % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
