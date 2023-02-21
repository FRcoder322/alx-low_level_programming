#include <stdio.h>
#include "main.h"
/**
 * _abs - computes absolute value of a value
 * @c: integer
 * description : computes integer
 *
 * Return: int
 */
/*
* If the number is greater than 0, then it is positive.
* If the number is less than 0, then it is negative.
* If the number is equal to 0, then it is zero.
*/
int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
