#include <stdio.h>
#include <stdlib.h>
/**
 * main-a program that multiplies two numbers.
 * Your program should print the result of the
 * multiplication, followed by a new line
 * You can assume that the two numbers and result of
 * the multiplication can be stored in an integer
 * If the program does not receive two arguments, your
 * program should print Error, followed by a new line, and return 1
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the strings of the arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int Q, R, Product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	Q = atoi(argv[1]);
	R = atoi(argv[2]);
	Product = Q * R;
	printf("%d\n", Product);
	return (0);

}
