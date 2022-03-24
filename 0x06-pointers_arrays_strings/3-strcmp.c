#include "main.h"
/**
 * _strcmp - function compares two strings
 * @dest: destination
 * @src: source
 * Return: result
 */
int _strcmp(char *dest, char *src)
{
int len1 = 0, len2, first, second, result;

for (len2 = 0; src[len2] != '\0'; len2++, len1++)
{
if (dest[len1] != src[len2])
{
first = dest[len1];
second = src[len2];
if (first < second || second > first)
{
result = first - second;
break;
}
else if (first > second || second < first)
{
result = first - second;
break;
}
}
else if (dest[len1] == src[len2])
{
result = 0;
}
}
return (result);
}
