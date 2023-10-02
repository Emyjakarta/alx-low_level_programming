#include <stdio.h>
#include <stdlib.h>
/**
 * main- a program that prints the minimum number
 * of coins to make change for an amount of money.
* Usage: ./change cents
* where cents is the amount of cents you need to give back
* if the number of arguments passed to your program is
* not exactly 1, print Error, followed by a new line, and return 1
* you should use atoi to parse the parameter passed to your program
* If the number passed as the argument is negative, print 0,
* followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
* @argc: number of arguments supplied to the program
* @argv: array of pointers to the strings of the arguments
* Return:Always 0 (Success)
*/
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int Q = atoi(argv[1]);

	if (Q < 0)
	{
		printf("0\n");
		return (0);
	}
	int *coins = {25, 10, 5, 2, 1, '\0'};
	int coins_number = sizeof(coins) / sizeof(coins[0]);

	int count_coins = 0, i = 0;

	while (coins_number > i)
	{
		while (coins[i] <= Q)
		{
			Q -= coins[i];
			count_coins++;
		}
		i++;
	}
	printf("%d\n", count_coins);
	return (0);
}
