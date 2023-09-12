#include "main.h"
#include <stdio.h>
/**
 * print_to_98-a function that prints all
 * natural numbers from n to 98, followed by a new line.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * Return:Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%i, ");
		printf("\n");
	}
}
