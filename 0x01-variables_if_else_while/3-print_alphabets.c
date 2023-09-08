#include <stdio.h>
/**
 * main-Entry point
 * print letters of the alphabet
 * in lowercase first and then
 * uppercase using putchar
 * Return:Always 0 (Success)
 */
int main(void)
{
	int P;

	for (P = 97; P <= 122; P++)
	putchar(P);
	for (P = 65; P <= 90; P++)
	putchar(P);
	putchar('\n');
	return (0);
}
