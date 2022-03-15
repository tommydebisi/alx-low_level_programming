#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - _isalpha function helps tell
 * if a character is in uppercase or not
 * @c: character to know if in lowercase
 *
 * Return: 1 if upper and 0 if not upper
 */
int _isalpha(int c)
{
	return ('A' <= c && c <= 'Z');
}
