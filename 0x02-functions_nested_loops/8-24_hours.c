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
	int i = 0, j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(':');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			putchar('\n');
			j++;
		}
		i++;
	}
}
