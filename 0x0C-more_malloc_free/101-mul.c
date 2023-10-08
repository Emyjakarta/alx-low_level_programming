#include "main.h"
#include <stddef.h>
int mult(int num1, int num2);
/**
 * errorprint-error message
 * Return:void
 */
void errorprint(void)
{
	size_t i;
	char *Q = "Error";

	for (i = 0; i < 5; i++)
	{
		_putchar(Q[i]);
	}
	_putchar('\n');
}
/**
 * _isnumber-check if string is a number
 * @str: string
 * Return:0
 */
int _isnumber(char *str)
{
	size_t i = 0;

	while (str[i] != '\0')
	{
		if (!_isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * __atoi-ascii to integer
 * @str: string
 * Return: result
 */
int __atoi(char *str)
{
	int result = 0;
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	{
		result = result * 10 + (_atoi(str[i]));
	}
	return (result);
}
/**
 * Resultprint-print result
 * @result: result
 * Return: void
 */
void Resultprint(int result)
{
	char result_string[12];
	int k = 0, j;
	int temp = result;

	while (temp > 0)
	{
		result_string[k++] = temp % 10 + '0';
		temp /= 10;
	}
	for (j = k - 1; j >= 0; j--)
	{
		_putchar(result_string[j]);
	}
	_putchar('\n');
}
/**
 * main-takes two arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1s, *num2s;
	size_t num1, num2, result;

	if (argc != 3)
	{
		errorprint();
		return (98);
	}
	num1s = argv[1];
	num2s = argv[2];
	if (!_isnumber(num1s) || !_isnumber(num2s))
	{
		errorprint();
		return (98);
	}
	num1 = __atoi(num1s);
	num2 = __atoi(num2s);
	result = mult(num1, num2);
	Resultprint(result);
	return (0);
}
