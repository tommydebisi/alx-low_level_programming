#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the number of command line arguments
 * @argv: holds the string values of the things enter on command line
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	/**
	 * attribute unused tells the compiler the char is not used
	 * so it shouldn't give error
	 */
	printf("%d\n", (argc - 1));/*to get the index of argv*/
	return (0);
}
