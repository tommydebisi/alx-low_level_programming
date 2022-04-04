#include <stdlib.h>
#include "main.h"
/**
 * str_concat - joins two strings together
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	/*Declare pointers and varaibles to be used*/
	unsigned int len1 = 0, len2 = 0, i, tot_len;
	unsigned int j = 0, k = 0;
	char *ptr;
	/*check if s1 and s2 are NULL strings and set to empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*length of first string*/
	while (*(s1 + len1) != '\0')
		len1++;
	/*length of second string*/
	while (*(s2 + len2) != '\0')
		len2++;
	/*add 1 so we can allocate \0 at the end*/
	tot_len = len1 + len2 + 1;
	/*typecast return type*/
	ptr = (char *)malloc(tot_len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/*loop to copy the strings*/
	for (i = 0; i < tot_len; i++)
	{
		/*add first string to heap memory*/
		if (*(s1 + j) != '\0')
		{
			*(ptr + i) = *(s1 + j);
			j++;
		}
		else if (*(s1 + j) == '\0' && *(s2 + k) != '\0')/*2nd string*/
		{
			*(ptr + i) = *(s2 + k);
			k++;
		}
	}
	*(ptr + i) = '\0';
	return (ptr);
}
