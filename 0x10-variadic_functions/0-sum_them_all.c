#include "variadic_functions.h"
/**
 * sum_them_all-a function that returns the sum of all its parameters
 * @n: count
 * Return:sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int Q, add;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);
	add = 0;
	Q = 0;
	while (n > Q)
	{
		add += va_arg(ptr, unsigned int);
		Q++;
	}
	va_end(ptr);
	return (add);
}
