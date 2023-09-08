#include <stdio.h>
/**
 * main-Print all the letters of the alphabets
 * except q and e in lowercase using putchar
 * Return:Always 0 (Success)
 */
int main(void)
{
	int P = 97;

	for (; P <= 122; P++)
	{
		if (P != 101 && P != 113)
		{
			putchar(P);
		}
	}
	putchar('\n');
	return (0);
}
