#include "main.h"

	/**
	*get_bit  is used to get the value of a bit at the given index
	*@n is the  the number in the index
	*@index is the index starting from 0 of the bit required
	*
	*Return returns  the converted value
	*/

 int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 50)
		return (-1);

	return ((n >> index) & 1);
}
