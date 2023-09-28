#include "main.h"
/**
 * is_pali_recursive-recursive helper function
 * @s: string
 * @begin: checks the length of s
 * Return:1 if palindrome else 0.
 */
int is_pali_recursive(char *s, int begin)
{
	if (begin <= 1)
		return (1);
	if (*s == *(s + begin - 1))
		return (is_pali_recursive(s + 1, begin - 2));
	else
		return (0);
}
/**
 * is_palindrome-main function that calls the recursive helper function
 * to initiate the recursive checking process
 * @s: string
 * Return: _strlen_recursion(s) else 0.
 */
int is_palindrome(char *s)
{
	int begin;

	begin = _strlen_recursion(s);
	if (begin <= 1)
		return (1);
	return (is_pali_recursive(s, begin));
}
