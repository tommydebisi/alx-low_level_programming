#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - checks the element and initializes the op addresses
 * @s: pointer to string
 * Return: Null if false
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	/* go through struct array and check operator*/
	while (ops[i].op)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
