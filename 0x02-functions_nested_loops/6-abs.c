#include "main.h"
/**
 *  int _abs(int)-a function that computes the
 *  absolute value of an integer.
 *  @Q: integer to be checked
 *  Return:void
 */
int _abs(int Q)
{
	if ((Q < 0 || Q == 0) || Q > 0)
		putchar(Q);
}