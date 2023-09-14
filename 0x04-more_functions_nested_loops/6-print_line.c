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
	int n;
	char Q = '_';

	for (n = -5; n <= 10; n++)
	{
		if (n > 0)
		{
			_putchar(Q);
		}
		else
		{
			 _putchar('\n');
		}
	}
	_putchar('\n');
}
