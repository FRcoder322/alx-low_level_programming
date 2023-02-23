#include "main.h"
/**
 *_isdigit - function that verifies if a character is a digit or not
 *@c: tested character
 *Return: return 1 if it is uppercase, 0 if not
 */

/*
* The function is named _isdigit and takes an int as a parameter.
*  The function checks if the int is between 48 and 57.
*  If the int is between 48 and 57, the function returns 1.
* If the int is not between 48 and 57, the function returns 0.
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}

