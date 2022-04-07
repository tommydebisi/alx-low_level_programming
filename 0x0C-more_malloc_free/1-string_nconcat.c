#include <stdlib.h>
#include "main.h"

/**
 * str_lent - gets the string length
 * @s: pointer to the string
 * Return: k
 */
int str_lent(char *s)
{
	/*declare variables to be used*/
	int k = 0;

	while (s[k] != '\0')
		k++;
	return (k);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: unsigned int
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*declare pointer and variables to be used*/
	unsigned int i, j, len1, len2, tot_len, comp;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*we need length of the two strings*/
	len1 = str_lent(s1);
	len2 = str_lent(s2);
	if (n >= len2)
		len2 = n;
	tot_len = len1 + n;/*adding the length of 1st string and n given above*/
	ptr = (char *)malloc(sizeof(char) * tot_len + 1);
	if (ptr == NULL)
		return (NULL);
	/*loop to add two strings to the memory*/
	for (comp = i = j = 0; comp < tot_len; comp++)
	{
		/*check if first string is done copying*/
		if (i < len1)
		{
			ptr[comp] = s1[i];
			i++;
		}
		else
		{
			ptr[comp] = s2[j];/*starts copying 2nd string*/
			j++;
		}
	}
	ptr[comp] = '\0';
	return (ptr);
}
