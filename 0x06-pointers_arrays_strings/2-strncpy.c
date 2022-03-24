#include "main.h"
/**
 * _strncpy - function adds two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int len1;

for (len1 = 0; len1 < n && src[len1] != '\0'; len1++)
{
dest[len1] = src[len1];
}
for (; len1 < n; len1++)
{
dest[len1] = '\0';
}
return (dest);
}
