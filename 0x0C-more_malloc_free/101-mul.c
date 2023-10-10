#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * multstr-multiply two positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: _resultstring
 */
char *multstr(char num1[], char num2[])
{
	int lent1 = strlen(num1), i, j;
	int lent2 = strlen(num2), prod, sum, k, _resultsize = lent1 + lent2;
	int *_result = calloc(_resultsize, sizeof(int));
	char *_resultstring;

	if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0)
	{
		_resultstring = malloc(2);
		if (_resultstring == NULL)
		{
			perror("Allocation of memory failed");
			exit(EXIT_FAILURE);
		}
		sprintf(_resultstring, "0");
		return (_resultstring);
	}
	for (i = lent1 - 1; i >= 0; i--)
	{
		for (j = lent2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0'), sum = prod + _result[i + j + 1];
			_result[i + j + 1] = sum % 10, _result[i + j] += sum / 10;
		}
	}
	i = 0;
	while (i < _resultsize && _result[i] == 0)
		i++;
	if (i == _resultsize)
		i--;
	_resultstring = malloc(sizeof(char) * (_resultsize - i + 1));
	k = 0;
	while (i < _resultsize)
	{
		_resultstring[k++] = _result[i] + '0';
		i++;
	}
	_resultstring[k] = '\0';
	if (_result != NULL)
		free(_result);
	return (_resultstring);
}
/**
 * _ispositivenumber-check if string is a number
 * @str: string
 * Return:1 if number, 0 otherwise
 */
int _ispositivenumber(char *str)
{
	int i = 0;

	while (str[i] != '\0')
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
 * main-takes two arguments and multiplies them
 * @argc: number of arguments
 * @argv: argument vector
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !_ispositivenumber(argv[1]) || !_ispositivenumber(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[1], "0") == 0 || strcmp(argv[2], "0") == 0)
	{
		printf("0\n");
		return (0);
	}
	result = multstr(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);
	return (0);
}
