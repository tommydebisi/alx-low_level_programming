#include "main.h"

/**
 * string_toupper - function changes lower case to uppercase
 * @str: character pointer
 * Return: str
 */
char *string_toupper(char *str)
{
/* first find the length of the array */
int len;

for (len = 0; str[len] != '\0'; len++)
{
/*the loop prints each character in the array*/
if (str[len] >= 97 && str[len] <= 122)
{
str[len] -= 32;
}
}
str[len] = '\0';
return (str);
}
