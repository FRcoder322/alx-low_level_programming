#include "main.h"
/**
 *print_numbers - function that prints all numbers from 0 to 9
 *
 *Return: returns nothing
 */
/*
* Declare a variable called number and initialize it to 48.
* Use a for loop to iterate through the numbers 48 to 57.
* Print the current number.
* Print a new line.
*/
void print_numbers(void)
{
int number = 48;
for (number = 48; number < 58; number++)
{
_putchar(number);
}
_putchar(10);
}
