#include "main.h"
#include <stdio.h>
/**
 * wildcmp1-a function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: first string
 * @s2: second string
 * Return:1 if identical else 0.
 */
int wildcmp1(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp1(s1 + 1, s2 + 1)) || wildcmp1(s1, s2 + 1)
			|| wildcmp1(s1 + 1, s2);
	return (0);

}
/**
 * wildcmp-a function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: first string
 * @s2: second string
 * Return:1 if identical else 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp1(s1, s2));
}
