#include "main.h"
/**
 * _puts_recursion - prints out all characters in a string
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	/*using the tail recursion to imitate loop*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
