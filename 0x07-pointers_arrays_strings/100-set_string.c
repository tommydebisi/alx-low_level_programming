#include "main.h"
/**
 * set_string - function value of pointer to char
 * @s: pointer to pointer
 * @to: string to be changed
 */
void set_string(char **s, char *to)
{
	/*setting the address of the poiter to pointer to the address of to*/
	*s = to;
}
