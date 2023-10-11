#include <stdlib.h>
#include <stdio.h>
/**
 * main-a program that prints the opcodes of its own main function.
 * Usage: ./main number_of_bytes
 * Output format:
 * the opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new line
 * You are allowed to use printf and atoi
 * You have to use atoi to convert the argument to an int
 * If the number of argument is not the correct one, print Error,
 * followed by a new line, and exit with the status 1
 * If the number of bytes is negative, print Error,
 * followed by a new line, and exit with the status 2
 * You do not have to compile with any flags
 * Note: if you want to translate your opcodes to
 * assembly instructions, you can use, for instance udcli.
 * @argc: number of arguments
 * @argv: pointer to the strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int size, Q;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}
	array = (char *)main;

	Q = 0;
	while (size > Q)
	{
		if (size - 1 == Q)
		{
			printf("%02hhx\n", array[Q]);
			break;
		}
		printf("%02hhx ", array[Q]);
		Q++;
	}
	return (EXIT_SUCCESS);
}
