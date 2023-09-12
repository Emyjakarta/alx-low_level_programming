#include "main.h"
/**
 * print_alphabet_x10-a function that prints
 * 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return:void
 */
void print_alphabet_x10(void)
{
	int Q;
	char alphabet;

	for (Q = 1; Q <= 10; Q++)
	{	
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
		_putchar('\n');

	}
}
