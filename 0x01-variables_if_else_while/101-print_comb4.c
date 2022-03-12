#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the for loop
 * Description: the main function processes the for loop,
 * runs the for loop till it's false
 *
 * Return: 0
 */

int main(void)
{
	int l;
	int m;
	int n;

	for (l = 48; l < 58; l++)
	{
		for (m = 49; m < 58; m++)
		{
			for (n = 50; n < 58; n++)
			{
				if (n > m && m > l)
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (l != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
