#include <unistd.h>
/**
 * _putchar-print a character
 * @c: character to print
 * Return:c
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
