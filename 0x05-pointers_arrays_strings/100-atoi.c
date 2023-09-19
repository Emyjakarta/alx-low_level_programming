#include "main.h"
/**
 * _atoi-a function that convert a string to an integer.
 * @s: string to be converted
 * The number in the string can be preceded
 * by an infinite number of characters
 * You need to take into account all the -
 * and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow
 * gcc flag to compile your code.
 * Return:The converted value
 */
int _atoi(char *s)
{
	int number = 0;
	int plusorminus = 1;
	int res = 0;

	while (*s)
	{
		if (*s == '-')
		{
			plusorminus = -1;
		}
		else if (*s == '+')
		{
			plusorminus = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = 1;
			res = (res * 10) + (*s - '0');
		}
		else if (number)
		{
			break;
		}
	
	*s++;
	}
	return (res * plusorminus);
}
