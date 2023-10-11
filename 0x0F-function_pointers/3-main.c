#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-function that takes two arguments
 * @argc: number of command line arguments
 * @argv: pointer to strings of the arguments
 * Return:Always 0 (Success);
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int res;
	int (*sign)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = get_op_func(argv[2]);
	if (sign == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = sign(num1, num2);
	printf("%i\n", res);
	return (0);
}
