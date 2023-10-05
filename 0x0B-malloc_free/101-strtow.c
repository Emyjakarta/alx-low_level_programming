#include "main.h"
#include <stdlib.h>
/**
 * wordcount-count words
 * @str: string
 * Return:cnt
 */
int wordcount(char *str)
{
	int cnt = 0, word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			word = 0;
		}
		else if (!word)
		{
			cnt++;
			word = 1;
		}
		str++;
	}
	return (cnt);
}
/**
 * strtow-a function that splits a string into words
 * The function returns a pointer to an array of strings (words)
 * @str: string
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 * Return:pointer to an array of strings
 */
char **strtow(char *str)
{
	int nword, wrdcnt, wrdlen;
	char **wrds;

	if (str == NULL || *str == '\0')
		return (NULL);
	nword = wordcount(str);
	wrds = (char **)malloc((nword + 1) * sizeof(char *));
	if (wrds == NULL)
		return (NULL);
	wrdcnt = 0;
	wrdlen = 0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (wrdlen > 0)
			{
				wrds[wrdcnt] = (char *)malloc((wrdlen + 1) * sizeof(char));
				if (wrds[wrdcnt] == NULL)
				{
					for (int i = 0; i < wrdcnt; i++)
					{
						free(wrds[i];
					}
					free(wrds);
					return (NULL);
				}
				int i;

				for (i = 0; i < wrdlen; i++)
				{
					wrds[wrdcnt[i] = *(str - wrdlen + i);
				}
				wrds[wrdcnt][i] = '\0';
				wrdcnt++;
				wrdlen = 0;
			}
		}
		else
		{
			wrdlen++;
		}
		str++;
	}
	if (wrdlen > 0)
	{
		wrds[wrdcnt] = (char *)malloc((wrdlen + 1) * sizeof(char));
		if (wrds[wrdcnt] == NULL)
		{
			for (i = 0; i <= wrdcnt; i++)
			{
				free(wrds[i]);
			}
			free(wrds);
			return (NULL);
		}
		int i;

		for (i = 0; i < wrdlen; i++)
		{
			wrds[wrdcnt[i] = *(str - wrdlen + i);
		}
		wrds[wrdcnt][i] = '\0';
		wrdcnt++;
	}
	wrds[wrdcnt] = NULL;
	return (wrds);
}
