#include "main.h"

/**
 * _strlen - prints length of string of array
 * @s: character to be inputed
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
