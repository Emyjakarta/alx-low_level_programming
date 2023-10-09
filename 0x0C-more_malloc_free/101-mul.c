#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
/**
 * mult-multiply two positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: num1 * num2
 */
long long int mult(int num1, int num2)
{
	return ((long long int)num1 * num2);
}
/**
 * _isnumber-check if string is a number
 * @str: string
 * Return:1 if number, 0 otherwise
 */
int _isnumber(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
		i++;
	}
	return (1);
}
/**
 * _atoi-ascii to integer
 * @str: string
 * Return: result
 */
int _atoi(char *str)
{
	int result = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		result = result * 10 + (str[i] - '0');
	}
	return (result);
}
/**
 * main-takes two arguments and multiplies them
 * @argc: number of arguments
 * @argv: argument vector
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2; 
	long long int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	if (num1 > 0 && num2 > INT_MAX / num1)
	{
		printf("Error\n");
		exit(98);
	}
	result = mult(num1, num2);
	printf("%lld\n", result);
	return (0);
}
