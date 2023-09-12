#include "main.h"
/**
 * jack_bauer-a function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return:void
 */
void jack_bauer(void)
{
	int Q;
	int R;

	for (Q = 0; Q < 24; Q++)
	{
		for (R = 0; R < 60; R++)
		{
			_putchar((Q / 10) + '0');
			_putchar((Q % 10) + '0');
			_putchar(':');
			_putchar((R / 10) + '0');
			_putchar((R % 10) + '0');
			_putchar('\n');
		}

	}

}
