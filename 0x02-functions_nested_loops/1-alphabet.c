#include "main.h"
/**
 * print_alphabet - Prints alphabets 'a - z'
 */
/*
* Declare a variable c of type char.
* Initialize c to the value of āaā.
* While c is less than or equal to āzā, do the following:
	a. Print the value of c.
	b. Increment c by 1.
* Print a new line.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
