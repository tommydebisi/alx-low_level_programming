#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the for loop
 * Description: the jack_bauer function processes the for loop,
 * runs the for loop till it's false
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(':');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar('\n');
			}
		}
	}
}
