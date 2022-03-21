#include "main.h"

/**
 * rev_string - funtion that prints the reverse of
 * string
 * @s: character to be inputed
 */

void rev_string(char *s)
{
int len = 0, max, half;
char first, last;

while (s[len] != '\0')
{
len++;
}
max = len - 1;
half = max / 2;
while (half >= 0)
{
first = s[max - half];
last = s[half];
s[half] = first;
s[max - half] = last;
half--;
}
