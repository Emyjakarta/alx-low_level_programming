#include <unistd.h>
/**
 * _putchar-a function that prints a character
 * @c: character to be printed
 * Return:c
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
