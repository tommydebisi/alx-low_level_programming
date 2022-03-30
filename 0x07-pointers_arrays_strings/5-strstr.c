#include "main.h"
#include <string.h>
/**
 * _strstr - prints the first occurence of subset string
 * @haystack: character to be compared with
 * @needle: character to be inputted
 * Return: 
 */

char *_strstr(char *haystack, char *needle)
{
	/*Declare variable to be used in loop*/
	int i, j, good = 0;

	int len = 0;
	while (needle[len] != '\0')
	{
		len++;
	}
	/*run through the string haystack*/
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/*run through string needle*/
		for (j = 0; needle[j] != '\0'; j++, i++)
		{
			if (haystack[i] == needle[j])
			{
				good += 1;
			}
			else
			{
				break;
			}
		}
		if (good == len)
			{
			return (&haystack[i - good]);
		}
		else
		{
			good = 0;
		}
	}
	/*if the program reaches here it means the condition isn't satisified*/
	return ('\0');
}
