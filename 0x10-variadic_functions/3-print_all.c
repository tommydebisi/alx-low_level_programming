#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - print anthing
 * @format: format which the program prints
 */

void print_all(const char * const format, ...)
{
	/*declare vairables to be used and va_list*/
	int i = 0, d = 0, j;
	const char *s, str[] = "cifs";
	va_list arg;
	/*getting the length of string specifier*/
	va_start(arg, format);
	while (format[i] && format)/*format is not NULL and not \0*/
	{
		j = 0;
		while (str[j])
		{
			if (format[i] == str[j] && d)
				printf(", ");
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int)), d = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int)), d = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), d = 1;
				break;
			case 's':
				s = va_arg(arg, char *), d = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n"), va_end(arg);

}
