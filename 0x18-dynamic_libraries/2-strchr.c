#include "main.h"
/**
  * _strchr-a function that locates a character in a string.
  * @s: string
  * @c: character to be located
  * Return:s if found or NULL if not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
