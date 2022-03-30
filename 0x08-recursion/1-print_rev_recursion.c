#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the given string
 */
void _print_rev_recursion(char *s)
{
	if (*s)/*checks the values of s till \0*/
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
