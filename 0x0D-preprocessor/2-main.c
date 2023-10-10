#include <stdio.h>
/**
 * main-program that prints the name of the file it was
 * compiled from, followed by a new line
 * @argc: number of arguments
 * @argv: pointer to an array of strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	printf("%s\n", __FILE__);
	return (0);
}
