#include "main.h"
#include <string.h>
/**
 * print_str - print string sequence.
 * @args: varadic parameter
 * Return: length of the string.
 */
int print_str(va_list args)
{
char *s;
int i, len;
s = va_arg(args, char *);
if (s == NULL)
{
s = "(null)";
len = strlen(s);
for (i = 0; i < len; i++)
{
write(1, &s[i], 1);
}
return (len);
}
else
{
len = strlen(s);
for (i = 0; i < len; i++)
{
write(1, &s[i], 1);
}
return (len);
}
}

