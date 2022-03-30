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
 * get_palin - checks if the string is same when read back and forth
 * @sr: pointer to the string to be checked
 * @j: integer to be used as index
 * @lent: the length of string sr
 * Return: 0 if not palindrome or 1 if palindrome
 */
int get_palin(char *sr, int j, int lent)
{
	/*check if index of sr is equal to lent of sr*/
	if (sr[j] != sr[lent - 1 - j])
		return (0);
	else if (j == (lent / 2))/*Means it reached the middle, it is palindrome*/
		return (1);
	return (get_palin(sr, (j + 1), lent));
}
/**
 * is_palindrome - checks if string is the same when read
 * forward and backward
 * @s: pointer to the string to be checked
 * Return: 0 if not palindrome or 1 if palindrome
 */
int is_palindrome(char *s)
{
	/*we need the length of string, so we declare variables*/
	int i = 0;

	int len = len_str(s);/*function prints length of string*/

	return (get_palin(s, i, len));
}
