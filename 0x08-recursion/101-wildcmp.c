#include "main.h"
/**
 * len_str - prints the length of string
 * @str: the pointer to string
 * Return: string length
 */
int len_str(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + len_str((str + 1)));
	/*keep on checking string till base condition is met*/
}
/**
 * compare - checks if the string is same
 * @sr: pointer to the string to be checked
 * @j: integer to be used as index
 * @lent: the length of string sr
 * Return: 0 if not palindrome or 1 if palindrome
 */
int compare(char *sr, int j, int lent)
{
	/*check if index of sr is equal to lent of sr*/
	if (sr[j] != sr[lent - 1 - j])
		return (0);
	else if (j == (lent / 2))/*Means it reached the middle, it is palindrome*/
		return (1);
	return (get_palin(sr, (j + 1), lent));
}
/**
 * wildcmp - checks if string is the same
 * @s1: pointer to the string1 to be checked
 * @s2: pointer to string 2 to be compared
 * Return: 0 if not palindrome or 1 if palindrome
 */
int wildcmp(char *s1, char *s2)
{
	/*we need the length of string, so we declare variables*/
	int i = 0;

	int len1 = len_str(s1);/*function prints length of string1*/

	int len2 = len_str(s2);/*function returns length of string2*/

	return (wildcmp(s1, s2, i, len1, len2));
}
