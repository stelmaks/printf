#include "main.h"
#include <string.h>
/**
 * print_cent - prints the char 37.
 *@args: varadic parameter
 *
 * Return: 0.
 */
int print_cent(va_list args)
{
char s = (char) va_arg(args, int);
if (s)
{
int p = 37;
write(1, &p, 1);
}
return (0);
}
