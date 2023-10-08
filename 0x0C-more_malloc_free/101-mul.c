#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * mult-multiply two positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: num1 * num2
 */
int mult(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * _isnumber-check if string is a number
 * @str: string
 * Return:0
 */
int _isnumber(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
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
 * main-takes two arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1s, *num2s;
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1s = calloc(strlen(argv[1]) + 1, sizeof(char));
	num2s = calloc(strlen(argv[2]) + 1, sizeof(char));
	if (num1s == NULL || num2s == NULL)
	{
		printf("Allocation of memory failed.\n");
		return (1);
	}
	strcpy(num1s, argv[1]);
	strcpy(num2s, argv[2]);
	if (!_isnumber(num1s) || !_isnumber(num2s))
	{
		printf("Error\n");
		free(num1s);
		free(num2s);
		exit(98);
	}
	num1 = _atoi(num1s);
	num2 = _atoi(num2s);
	result = mult(num1, num2);
	printf("%i\n", result);
	free(num1s);
	free(num2s);
	return (0);
}
