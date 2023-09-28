#include "main.h"
#include <unistd.h>
/**
 * is_pali_recursive-recursive helper function
 * @s: string
 * @begin: first pointer
 * @finish: second pointer that transverse the string and checks
 * if it's a palindrome
 * Return:1 if palindrome else 0.
 */
int is_pali_recursive(char *s, int begin, int finish)
{
	if (begin >= finish)
		return (1);
	if (s[begin] != s[finish])
		return (0);
	return (is_pali_recursive(s, begin + 1, finish - 1));
}
/**
 * is_palindrome-main function that calls the recursive helper function
 * to initiate the recursive checking process
 * @s: string
 * Return: _strlen_recursion(s) else 0.
 */
int is_palindrome(char *s)
{
	if (s == NULL)
		return (0);
	int length = _strlen_recursion(s);
	return (is_palindrome(s, 0, length - 1));
}
