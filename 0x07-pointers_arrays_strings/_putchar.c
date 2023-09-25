#include <unistd.h>
/**
 * _putchar-print a character
 * @Q: character to be printed
 * Return:Q
 */
char _putchar(char Q)
{
	return (write(1, &Q, 1));
}
