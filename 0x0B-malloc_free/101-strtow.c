#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * wordcount-count words
 * @str: string
 * Return:cnt
 */
int wordcount(char *str)
{
	int cnt = 0, word = 0;

	if (str == NULL || *str == '\0')
		return (0);
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
 * wordextract-extract words
 * @start: start position of word in input string
 * @length: length of word
 * Return:word
 */
char *wordextract(char *start, int length)
{
	char *word = (char *)malloc((length + 1) * (sizeof(char)));

	if (word == NULL)
	{
		return (NULL);
	}
	strncpy(word, start, length);
	word[length] = '\0';
	return (word);
}
/**
 * wordpopulate-populate words
 * @words: array of pointers to words that will be populated in the function
 * @str: represents the input string
 * @nword: number of words in input string
 * Return:words
 */
char **wordpopulate(char **words, char *str, int nword)
{
	int i, wrdcnt = 0, wrdlen = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (wrdlen > 0)
			{
				words[wrdcnt] = wordextract(str - wrdlen, wrdlen);
				if (words[wrdcnt] == NULL)
				{
					for (i = 0; i < wrdcnt; i++)
						free(words[i]);
					free(words);
					return (NULL);
				}
				wrdcnt++;
				wrdlen = 0;
			}
		}
		else
			wrdlen++;
		str++;
	}
	if (wrdlen > 0)
	{
		words[wrdcnt] = wordextract(str - wrdlen, wrdlen);
		if (words[wrdcnt] == NULL)
		{
			for (i = 0; i <= wrdcnt; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		wrdcnt++;
	}
	words[wrdcnt] = NULL;
	return (words);
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
	int nword;
	char **wrds;

	if (str == NULL || *str == '\0')
		return (NULL);
	nword = wordcount(str);
	wrds = (char **)malloc((nword + 1) * sizeof(char *));
	if (wrds == NULL)
		return (NULL);
	wrds = wordpopulate(wrds, str, nword);
	return (wrds);
}
/**
 * freewords-free memory
 * @words: memory to be freed
 * Return:void
 */
void freewords(char **words)
{
	int i;

	if (words == NULL)
		return;
	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
}
