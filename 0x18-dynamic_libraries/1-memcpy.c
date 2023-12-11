#include "main.h"
/**
 * _memcpy-a function that copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: size of bytes to be copied
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n-- > 0)
	{
		*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}
