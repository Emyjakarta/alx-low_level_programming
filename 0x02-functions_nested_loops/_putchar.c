#include <unistd.h>
/**
 * prints a character to the console
 * The character to print is Q
 * Return 1 if successful, -1 if unsuccessful
 */
char _putchar(char *Q1, ...)
{	
	
	return (write(1, &Q1, 1));
}

