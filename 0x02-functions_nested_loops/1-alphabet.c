#include <stdio.h>
#include "main.h"

/**
 * main - prints the character in putchar
 *
 * Return: 0
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
	return (0);
}
