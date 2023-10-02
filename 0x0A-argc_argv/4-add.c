#include <stdio.h>
#include <stdlib.h>
/**
 * main-a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that are not
 * digits, print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of all
 * the numbers can be stored in an int
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int Q, R, Add;
	Q = 1;
	Add = 0;

	while (Q < argc)
	{
		R = 0;
		while (argv[Q][R])
		{
			if (argv[Q][R] < '0' || argv[Q][R] > '9')
			{
				printf("Error\n");
				return (1);
			}
			R++;
		}
		Add += atoi(argv[Q]);
		Q++;
	}
	printf("%d\n", Add);
	return (0);
}
