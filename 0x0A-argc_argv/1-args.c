#include <stdio.h>
/**
 * main-a program that prints the number of arguments passed into it
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	void argv;

	printf("%s\n", argc - 1);

	return (0);
}
