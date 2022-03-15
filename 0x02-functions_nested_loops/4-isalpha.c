#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - _isalpha function helps tell
 * if a character is an alphabet or not
 * @c: character to know if is an alphabet
 *
 * Return: 1 if an alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	return ('A' <= c && c <= 'z');
}
