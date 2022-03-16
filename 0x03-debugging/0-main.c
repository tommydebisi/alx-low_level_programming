#include "main.h"
/**
 * positive_or_negative - tells us numbers that are positive or negative
 * @i: character to be tested
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	printf("%d is zero\n", i);
}
