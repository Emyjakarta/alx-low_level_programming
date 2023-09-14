#include "main.h"
/**
 * print_line-a function that draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 * You can only use _putchar function to print
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return:void
 */
void print_line(int n)
{
	int Q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (Q = 0; n >= Q; Q++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
