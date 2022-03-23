#include "main.h"
/**
 * _strncat - function adds two strings
 * @dest: destination
 * @src: source
 * @n: bytes to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len1, len2;
/* i need to find the length of the first string*/
len1 = 0;
while (dest[len1] != '\0')
{
len1++;
}
/*won't seal off here because we want to add more strings*/

for (len2 = 0; len2 < n; len2++, len1++)
{
/*adds each character string of src printed to dest*/
dest[len1] = src[len2];
}
/* to seal off the string */
len1 = '\0';

return (dest);
}
