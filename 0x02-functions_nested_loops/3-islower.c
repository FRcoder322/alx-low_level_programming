#include <stdio.h>
#include "main.h"
/**
 * _islower - function name
 * @c : varable
 * description : checks if it is caselower
 *
 * Return: int
 */
/*
 * If the character is between 97 and 122, then it is a lowercase letter.
 * If the character is not between 97 and 122,it is not a lowercase letter.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
