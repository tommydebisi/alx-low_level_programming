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
	int i = 0, j = 0, len = strlen(format);
	char *s, str[] = "cifs";
	va_list arg;
	/*getting the length of string specifier*/
	va_start(arg, format);
	while (format[i] && format)/*format is not NULL and not \0*/
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				s = va_arg(arg, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		while (str[j])
		{
			if (format[i] == str[j] && i != (len - 1))
				printf(", ");
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n"), va_end(arg);

}
