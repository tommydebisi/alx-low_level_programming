#include "main.h"
/**
 * reverse_array - function adds two strings
 * @a: integer pointer
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
/*First declare variables, blen is for bytes length */
int i, blen, temp;

for (i = 0, blen = n - 1; i <  blen; i++, blen--)
{
temp = a[i];
a[i] = a[blen];
a[blen] = temp;
}
}
