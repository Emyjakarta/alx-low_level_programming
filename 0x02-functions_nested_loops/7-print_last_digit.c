#include "main.h"
/**
 * print_last_digit-a function that prints the last digit of a number.
 * @Q: number to be checked
 * Return:the value of the last digit
 */
int print_last_digit(int Q)
{
	int R;

	if (Q < 0)
	{
		R = -1 * (Q % 10);
		_putchar(R + '0');
		return (R);
	}
	else
	{
		R = Q % 10;
		_putchar(R + '0');
		return (R);
	}
}
