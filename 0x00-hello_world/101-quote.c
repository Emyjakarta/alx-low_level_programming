#include <unistd.h>
#include <string.h>
/**
 * main -C Program that prints an exact phrase
 * without using any of the functions in man (3) printf
 * or man (3) puts
 * Return:Always 0 (Success)
 */
int main(void)
{
	char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

	write(2, n, strlen(n));
	return (1);
}
