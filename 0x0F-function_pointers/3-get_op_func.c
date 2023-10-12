#include "3-calc.h"
/**
 * get_op_func-function that takes a pointer to char *s as an argument
 * and returns a pointer to a function that takes two integers as arguments
 * and returns an integer
 * @s: pointer to a char
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int Q;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	Q = 0;
	while (ops[Q].op)
	{
		if (*(ops[Q].op) == *s && *(s + 1) == '\0')
			return (ops[Q].f);
		Q++;
	}
	return (NULL);
}
