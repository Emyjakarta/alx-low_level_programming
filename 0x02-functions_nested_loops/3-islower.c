#include "main.h"
/**
 * _islower-a function that checks for lowercase character
 * @c: check whether c is lowercase or not
 * Return:1 if c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if ('c' >= 'a' && 'c' <= 'z')
	return (1);
	else
	return (0);
}
