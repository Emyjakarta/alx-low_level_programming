#include "main.h"
/**
 *  infinite_add-a function that adds two numbers.
 *  @n1: first number
 *  @n2: second number
 *  @r: buffer that the function will use to store the result
 *  @size_r: buffer size
 *  The function returns a pointer to the result
 *  You can assume that you will always get positive numbers, or 0
 *  You can assume that there will be only digits in the strings n1 and n2
 *  n1 and n2 will never be empty
 *  If the result can not be stored in r the function must return 0
 *  Return:r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int Q, R, S, T, U, V;

	Q = 0;
	while (n1[Q])
	{
		Q++;
	}
	R = 0;
	while (n2[R])
	{
		R++;
	}
	if (Q > size_r || R > size_r)
	{
		return (0);
	}
	U = 0;
	Q -= 1;
	R -= 1;
	S  = 0;
	while (S < size_r - 1)
	{
		V = U;
		if (Q >= 0)
			V += n1[Q] - '0';
		if (R >= 0)
			V += n2[R] - '0';
		if (Q < 0 && R < 0 && V == 0)
		{
			break;
		}
		U = V / 10;
		r[S] = V % 10 + '0';
		Q--;
		R--;
		S++;
	}
	r[S] = '\0';
	if (Q >= 0 || R >= 0 || U)
		return (0);
	S -= 1;
	T = 0;
	while (T < S)
	{
		U = r[S];
		r[S] = r[T];
		r[T] = U;
		S--;
		T++;
	}
	return (r);
}
