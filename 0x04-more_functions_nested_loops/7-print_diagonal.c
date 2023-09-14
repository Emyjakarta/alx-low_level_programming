#include "main.h"
/**
 * print_diagonal-a function that draws a
 * diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * You can only use _putchar function to print
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return:void
 */
void print_diagonal(int n)
{
	int Q;
	int R;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (Q = 1; n > Q; Q++)
		{
			for (R = 1; n > R; R++)
			{
				_putchar(' ');
				_putchar('\\');

				if (n - 1 == Q)
				continue;
			}
		}
		_putchar('\n');
	}
}
