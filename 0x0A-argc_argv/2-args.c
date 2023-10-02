#include <stdio.h>
/**
 * main-a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int Q = 0;

	while (argc > Q)
	{
		printf("%s\n", argv[Q]);
		Q++;
	}
	return (0);
}
