#include <stdio.h>
#include "main.h"

/**
 * _islower - _islower function helps tell
 * if a character is in lowercase or not
 * @c: character to know if in lowercase
 *
 * Return: 1 if lower and 0 if not lower
 */
int _islower(int c)
{
	return ('a' <= c && c <= 'z');
}
