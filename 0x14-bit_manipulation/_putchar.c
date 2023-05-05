# include <unistd.h>

 /**
	* _putchar writes the character c to stdout
	*then prints and ruturn sucess 1
	*if there is an error -1 is returned
*/

int _putchar (char c)
{
return (write (1,&c, 1));
}
