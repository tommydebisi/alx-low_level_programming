#include "main.h"
/**
 * _strspn - function returns the position which character is
 * not in character accept
 * @s: character to check from
 * @accept: character to be inputted
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	/*Declare variables to use in for loop*/
	unsigned int result = 0, i, j;

	/*loop through s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*loop through accept and check if any character equal to s*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result += 1;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (result);
}
