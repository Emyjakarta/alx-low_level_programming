#include <unistd.h>
/**
 * _putchar-prints a character to the console
 * @Q1:The character to print
 * Return:1 if successful, -1 if unsuccessful
 */
char _putchar(char *Q1, ...)
{

	return (write(1, &Q1, 1));
}

