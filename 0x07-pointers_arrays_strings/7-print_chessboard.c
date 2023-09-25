#include "main.h"
#include <stdio.h>
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
			printf("%c ", a[Q][R]);
			Q++
			R++;
		}
		Q++;
		R++
		printf("\n");
	}
}
