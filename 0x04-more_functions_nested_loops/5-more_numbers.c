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

	for (i = 0; i < 10; i++)
	{
		for (Q = 0; Q <= 15; Q++)
		{
			if (Q >= 10)
			{
				_putchar((Q / 10) + '0');
				_putchar((Q % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
