#include "main.h"
/**
 * _strchr - function returns the string from the first
 * occurence of c
 * @s: string of characters
 * @c: character to be checked for
 * Return: s
 */

char *_strchr(char *s, char c)
{
	/*Declare variables to be used in the for loops*/
	int i;

	/*loop through and get the first occurence*/
	for (i = 0; s[i]; i++)
	{
		/*if gotten the first occurence return the address*/
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	/*if after going through the loop there's no occurence of c return NULL*/
	return ('\0');
}
