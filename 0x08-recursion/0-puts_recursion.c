#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints out all characters in a string
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	/*using the tail recursion to imitate loop*/
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
