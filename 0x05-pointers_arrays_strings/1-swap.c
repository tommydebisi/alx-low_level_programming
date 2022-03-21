#include "main.h"

/**
 * swap_int - changes values
 * @a: character to be inputed
 * @b: second character to be inputted
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
