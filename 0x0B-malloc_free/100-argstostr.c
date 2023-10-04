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
	int Q = 0, overall_length = 0, length_av = 0, post = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac > Q)
	{
		length_av = 0;
		while (av[Q][length_av] != '\0')
		{
			length_av++;
		}
		overall_length += length_av + 1;
		Q++;
	}
	overall_length += ac - 1;
	new_string = malloc(overall_length);
	if (new_string == NULL)
	{
		return (NULL);
	}
	Q = 0;
	post = 0;
	while (ac > Q)
	{
		length_av = 0;
		while (av[Q][length_av] != '\0')
		{
			new_string[post++] = av[Q][length_av];
			length_av++;
		}
		if (Q < ac - 1)
			new_string[post++] = '\n';
		Q++;
	}
	new_string[post] = '\0';
	return (new_string);
}
