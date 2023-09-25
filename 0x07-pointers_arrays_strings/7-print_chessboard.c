#include "main.h"
/**
 * print_chessboard-a function that prints the chessboard.
 * Return:void
 */
void print_chessboard(char (*a)[8])
{
	int Q, R;

	Q = 0;
	while(Q < 8)
	{
		R = 0;
		while (R < 8)
		{
			_putchar(a[Q][R]);
			R++;
		}
		Q++;
		_putchar('\n');
	}
}
