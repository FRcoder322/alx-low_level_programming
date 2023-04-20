#include "main.h"

/**
*@n is the  number to be used.
*clear_bit   sets a bit at a position to 0.
*@index is the position to be cleared
*
*Return: 1 on success and -1 on fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 10) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
