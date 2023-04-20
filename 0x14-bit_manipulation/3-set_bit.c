#include "main.h"

/**
*@index is the index to be set
*@n is the number number to be used
*
*set_bit  is used sets a bit at position to 1
*Return: 1 on success, -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 10) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
