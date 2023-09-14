nclude <unistd.h>
/**
 * _putchar-prints a character to the console
 * @Q:The character to print
 * Return:1 if successful, -1 if unsuccessful
 */
int _putchar(char Q)
{

	return (write(1, &Q, 1));
}
