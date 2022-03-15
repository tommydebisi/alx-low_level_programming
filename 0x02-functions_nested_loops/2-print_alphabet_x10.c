#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the character in putchar
 *
 */
void print_alphabet_x10(void)
{
	int dig = 0, alp;

	while (dig < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		dig++;
	}
}
