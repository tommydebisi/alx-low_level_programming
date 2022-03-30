#include "main.h"
#define N 0
/**
 * _strlen_recursion - prints the string length
 * @s: pointer to the string
 * Return: 1+function or 0 is s is equal to null
 */
int _strlen_recursion(char *s)
{
	/*using concept of addition to get string length*/
	if (*s == '\0')
		return (0);
	else/*keep on adding 1 till s is null to return the values back*/
		return (1 + _strlen_recursion(s + 1));
}
