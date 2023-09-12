#include "main.h"

/**
 * print_alphabet(void)-print alphabet in lowercase
 * followed by a new line
 * Return:Always void (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z', alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
