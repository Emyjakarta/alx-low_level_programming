#include "main.h"
#include <stdio.h>
/**
 * print_buffer-a function that prints a buffer.
 * @b: buffer to print
 * @size: size of buffer
 * The function must print the content of size
 * bytes of the buffer pointed by b
 * The output should print 10 bytes per line
 * Each line starts with the position of the first
 * byte of the line in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the
 * buffer, 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer. If the
 * byte is a printable character, print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 * Return:void
 */
void print_buffer(char *b, int size)
{
	int Q, R, S, T;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	Q = 0;
	while (size > Q)
	{
		S = size - Q < 10 ? size - Q : 10;
		printf("%08x: ", Q);
		R = 0;
		while (R < 10)
		{
			if (R < S)
				printf("%02x", *(b + Q + R));
			else
				printf("  ");
			if (R % 2)
			{
				printf(" ");
			}
			R++;
		}
		R = 0;
		while (R < S)
		{
			int T = *(b + Q + R);

			if (T < 32 || T > 132)
			{
				T = '.';
			}
			printf("%c", T);
			R++;
		}
		printf("\n");
		Q += 10;
	}
}
