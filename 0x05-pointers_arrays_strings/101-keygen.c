#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * main-program that generates random valid passwords
 * for the program 101-crackme
 * Return:Always 0 (Success)
 */
int main(void)
{
	int password[150], Q, sum = 0, R;

	srand(time(NULL));
	for (Q = 0; Q < 150; Q++)
	{
		password[Q] = rand() % 78;
		sum += password[Q] + '0';
		_putchar(password[Q] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			R = 2772 - sum - '0';
			sum += R;
			_putchar(R + '0');
			break;
		}
	}
	return (0);
}
