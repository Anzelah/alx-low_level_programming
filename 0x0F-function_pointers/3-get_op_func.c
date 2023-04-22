#include <stdio.h>
#include "3-calc.h"
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div}
		{"%", op_mod},
			{NULL, NULL}
	};
	int i;

/**
 * get_op_func - selects correct function to perform operation
 * asked by the user
 * @s: operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds
 * to the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f)
}
