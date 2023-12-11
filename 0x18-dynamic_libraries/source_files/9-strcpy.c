#include "main.h"
/**
 * *_strcpy-a function that copies the string
 * pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: first variable of string
 * @src: second variable of string
 * Return:the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest1 = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest1);
}
