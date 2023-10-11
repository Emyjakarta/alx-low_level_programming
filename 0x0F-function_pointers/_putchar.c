#include <unistd.h>
/**
 * _putchar-prints a character
 * @Q: character to print
 * Return:void
 */
void _putchar(char Q)
{
	write(1, &Q, 1);
}
