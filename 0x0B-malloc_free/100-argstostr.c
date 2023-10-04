#include "main.h"
#include <stdlib.h>
/**
 * argstostr-a function that concatenates all the
 * arguments of your program
 * @ac: number of arguments
 * @av: array of argument strings
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 * Return:pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int Q = 0, overall_length, length_av = 0, post = 0;
	char *ptr, *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac > Q)
	{
		length_av = 0;
		while (av[Q][length_av] != '\0')
		{
			length_av++;
			overall_length++;
		}
		overall_length++;
		Q++;
	}
	overall_length++;
	ptr = malloc(overall_length * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	new_string = ptr;
	Q = 0;
	while (ac > Q)
	{
		length_av = 0;
		while (av[Q][length_av] != '\0')
		{
			*ptr = av[Q][length_av];
		}
		*ptr = '\n';
		ptr++;
	}
	return (new_string);
}
