#include "main.h"
#include <stdio.h>
/**
 *  positive_or_negative - checks for number's value
 * @i: is the number to be checked
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
