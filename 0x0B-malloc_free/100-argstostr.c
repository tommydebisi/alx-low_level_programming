#include <stdlib.h>
#include "main.h"
/**
 * argstostr - prints argument on new lines
 * @ac: arguent number
 * @av: argument elements
 * Return: ptr
 */

char *argstostr(int ac, char **av)
{
	/*declare pointer and variables to be used in loop*/
	int row, col, len, comp;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*get the length of each argument string*/
	for (row = len = 0; row < ac; row++)
	{
		/*get the length of each element in string*/
		for (col = 0; av[row][col] != '\0'; col++)
			len++;
		/*this would add another space to len for \n using malloc*/
		len++;
	}
	/*we have our length next we create space based on the length*/
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/*getting arguments and elemnts*/
	for (row = col = comp = 0; comp < len; col++, comp++)
	{
		/*checking each elements and placing \n at \0*/
		if (av[row][col] == '\0')
		{
			ptr[comp] = '\n';
			row++;
			comp++;
			col = 0;
		}
		if (comp < len - 1)
			/*setting the contents of the string to the memory*/
			ptr[comp] = av[row][col];
	}
	/*at this point comp is < len + 1*/
	ptr[comp] = '\0';
	return (ptr);
}
