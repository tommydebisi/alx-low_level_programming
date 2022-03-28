#include "main.h"
/**
 * _strpbrk - returns the address from where the characters s and accept
 * are equal
 * @s: character to check from
 * @accept: character to be inputted
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	/*Declare variables to use in for loop*/
	int i, j;

	/*loop through s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*loop through accept and check if any character equal to s*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
		{
			break;
		}
	}
	return (&s[i]);
}
