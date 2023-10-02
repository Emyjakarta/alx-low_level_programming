#include <stdio.h>
/**
 * main-a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

