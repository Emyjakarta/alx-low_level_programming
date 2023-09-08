#include <stdio.h>
/**
 * main-Entry point
 * use putchar to print the
 * letters of the alphabet
 * Return:Always 0 (Success)
 */
int main(void)
{
	int P;

	for (P = 97; P <= 122; P++)
	putchar(P);
	putchar('\n');
	return (0);
}
