#include <unistd.h>
/**
 * _putchar-prints a character to standard output
 * @Q: character to be printed
 * Return:Q (Success)
 */
char _putchar(char Q)
{
	return (write(1, &Q, 1));
}
