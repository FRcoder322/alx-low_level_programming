#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints out last digit
 * @a: integer
 *
 * description : prints out the last digit of a value
 * Return: a
 */
/*
* If a is less than 0, then a = -(a % 10)
* If a is greater than 0, then a = a % 10
* If a is equal to 0, then a = 0
* Print the last digit of a
* Return the last digit of a
*/
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -(a % 10);
	}
	else if (a > 0)
	{
		a = a % 10;
	}
	else
	{
		a = 0;
	}
	_putchar(a + '0');
	return (a);
}
