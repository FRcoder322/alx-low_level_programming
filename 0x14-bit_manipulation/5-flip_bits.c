#include "main.h"

/**
*flip_bits  it  gets the number of bits to flip to get from n to m.
*@n is the initial number.
*@m is the final number.
*Return will returns  the number of flipped bits
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
