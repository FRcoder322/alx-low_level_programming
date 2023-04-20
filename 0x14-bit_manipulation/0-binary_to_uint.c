#include "main.h"
 /**
 * binary_to_uint  it converts a binary to an unsigned int.
 * @b it is the binary number as a string
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int float = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
float += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (float);
}

/**
 * check_valid_string   checks if a string has only 0's and 1's.
 * @b is the  string to be checked
 */
int check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
  if (*b != '1' && *b != '0')
  return (0);
  b++;
}
 return (1);
}
