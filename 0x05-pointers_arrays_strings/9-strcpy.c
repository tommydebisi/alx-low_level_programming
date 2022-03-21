#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - prints an array with size given
 * @dest: character to be inputed
 * @dest: other character to be inputted
 */

char *_strcpy(char *dest, char *src)
{
int len;

for (len = 0; *(src + len) != '\0'; len++)
{
*dest = *(src + len);
}
dest
return (dest);
}

