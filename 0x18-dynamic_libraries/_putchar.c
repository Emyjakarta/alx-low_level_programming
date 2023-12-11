#include <unistd.h>
/**
 * _putchar-prints a character to the console
 * @c:The character to print
 * Return:1 if successful, -1 if unsuccessful
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}

