#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 *
 * FUNCTIONALITY
 *
 *  First, we check if the string is NULL.  If it is, we return NULL.
 *   Next, we loop through the string to find the length of the string.
 *   We allocate memory for the copy of the string.
 *   We check if the memory was allocated.  If it wasn’t, we return NULL.
 *   We loop through the string again,.
 *   We add a null terminator to the end of the string.
 *   We return the copy of the string.
 *
 * Time Complexity: O(n)
 */
char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
