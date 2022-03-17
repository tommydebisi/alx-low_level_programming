#include <stdio.h>
#include "main.h"

/**
*_isupper - prints the return value if uppercase
*or lowercase
*@c: character to be tested
*Return: 1 if uppercase 0 if lowercase
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
