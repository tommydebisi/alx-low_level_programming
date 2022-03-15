#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the character in putchar
 *
 */
void print_alphabet(void)
{
	int alp;

	alp = 'a';
	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
