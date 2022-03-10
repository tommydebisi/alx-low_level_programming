#include <stdio.h>

/**
 * main - prints the string and size
 * of data types
 *
 * Description: using the main function
 * the program prints strings and size of
 * data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char: %lu\n byte(s)", (unsigned long)sizeof(c));
	printf("The size of an int: %lu\n byte(s)", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu\n byte(s)", (unsigned long)sizeof(li));
	printf("The size of a long long int: %lu\n byte(s)",
			(unsigned long)sizeof(lli));
	printf("The size of a float: %lu\n byte(s)", (unsigned long)sizeof(f));
	return (0);
}
