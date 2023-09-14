#include "main.h"
/**
 * print_square-a function that prints
 * a square, followed by a new line.
 * You can only use _putchar function to print
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * Return:void
 */
void print_square(int size)
{
	int Q;
	int R;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (Q = 0; size > Q; Q++)
		{
			for (R = 0; size > R; R++)
			{
				if (R == Q)
					_putchar('#');
				else
					_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
