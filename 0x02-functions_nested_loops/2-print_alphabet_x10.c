#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */
/*
*  Declare a function called print_alphabet_x10 .
* Declare an integer variable i and initialize it to 0.
* Declare a for loop that will run 10 times.
* Declare a character variable c and initialize it to ‘a’.
* Declare a for loop that will run until c is greater than ‘z’.
* Print the character c.
* Increment c by 1.
* Print a new line.
* Increment i by 1.
* End the function.
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
