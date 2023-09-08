#include <stdio.h>
/**
 * main-print all numbers of base 16
 * in lower case using putchar
 * Return:Always 0 (Success)
 */
int main(void)
{
	int T;

	for (T = 48; T <= 57; T++)
	putchar(T);
	for (T = 97; T <= 102; T++)
	putchar(T);
	putchar('\n');
	return (0);
}
