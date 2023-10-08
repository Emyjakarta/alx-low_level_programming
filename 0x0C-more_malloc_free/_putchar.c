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
