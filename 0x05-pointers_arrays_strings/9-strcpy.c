#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - prints an array with size given
 * @src: character to be inputed
 * @dest: other character to be inputted
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int len;

for (len = 0; *(src + len) != '\0'; len++)
{
dest[len] = *(src + len);
}
dest[len] = '\0';
return (dest);
}

