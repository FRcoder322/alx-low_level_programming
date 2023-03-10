#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

/*
* The main function takes in the number of arguments and an array of strings.
* The first for loop iterates through the arguments.
* The second for loop iterates through each character of the argument.
* If the character is not a digit, the program prints “Error” and returns 1.
*If the character is a digit, the program adds the number to the sum.
*The program prints the sum and returns 0.
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
