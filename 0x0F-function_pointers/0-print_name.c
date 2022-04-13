#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - prints function pointer and string
 * @name: pointer to string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *str))
{
	/*delclare variable to be used*/
	int len;
	char *ptr;
	/*checking if name is not null*/
	if (name == NULL && f == NULL)
		return;
	/*getting string length*/
	len = strlen(name);
	/*mallocing space for the string 'name' */
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return;
	}
	/*copy string to malloc space*/
	strcpy(ptr, name);
	/*now use the pointer to function*/
	f(ptr);
	free(ptr);
}
