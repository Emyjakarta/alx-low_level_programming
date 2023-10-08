#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar-print a character
 * @Q: character to print
 * Return:Q
 */
char _putchar(char Q)
{
	return (write(1, &Q, 1));
}
/**
 * _isdigit-checks if a character is a digit
 * @Q: character to be checked
 * Return:digits
 */
int _isdigit(char Q)
{
	return (Q >= '0' && Q <= '9');
}
/**
 * _atoi: convert ascii to integer
 * @Q: character to be converted
 * Return: integer
 */
int _atoi(char Q)
{
	return (Q - '0');
}
/**
 * mult: multiply two positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: num1 * num2
 */
int mult(int num1, int num2)
{
	return (num1 * num2);
}

