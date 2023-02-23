#include <stdio.h>
/**
 *main - program that prints either number
 *or fizz or buzz or fizzbuzz
 *
 *
 *Return: returns 0
 */
/*
* The while loop is used to iterate through the numbers from 1 to 100.
* The if statement checks if the number is divisible by both 3 and 5. If it is, then it prints FizzBuzz.
* The else if statement checks if the number is divisible by 3. If it is, then it prints Fizz.
* The else if statement checks if the number is divisible by 5. If it is, then it prints Buzz.
* The else statement prints the number.
* The printf statement prints a new line.
* The return statement returns 0.
*/
int main(void)
{
	int num;

	while (num++ < 100)

	if ((num % 3 == 0) && (num % 5 == 0))
	printf("FizzBuzz ");

	else if ((num % 3) == 0)
	printf("Fizz ");

	else if ((num % 5) == 0)
	{
	if (num != 100)
	printf("Buzz ");

	else
	printf("Buzz");
	}
	else
	printf("%d ", num);

	printf("\n");
	return (0);
}
