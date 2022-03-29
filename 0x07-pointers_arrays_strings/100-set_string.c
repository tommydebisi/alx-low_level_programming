#include "main.h"
/**
 * set_string - function replaces string with another
 * @s: pointer to pointer
 * @to: string to be changed
 */
void set_string(char **s, char *to)
{
	/*Declare variables to be used in for loop*/
	int i;

	/*run through loop, set s and to together*/
	for (i = 0; **(s + i); i++)
	{
		*(to + i) = **(s + i);
	}
}
