#include "main.h"
/**
 * print_triangle-a function that prints a triangle,
 * followed by a new line.
 * You can only use _putchar function to print
 * @size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * Return:void
 */
void print_triangle(int size)
{
	int Q;
	int R;

	for (Q = 1; size >= Q; Q++)
	{
		for (R = 1; size - Q >= R; R++)
		{
			_putchar(' ');
		}
			for (R = 1; R <= Q; R++)
			{
				_putchar('#');
			}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
