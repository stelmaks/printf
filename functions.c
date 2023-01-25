#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a char
 * @args: List a of arguments
 *
 * Return: Number of chars printed
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);

	return (1);
}

/************************* PRINT A STRING *************************/

/**
 * print_string - Prints a string
 * @args: List a of arguments
 *
 * Return: Number of chars printed
 */

int print_string(va_list args)
{
	char *s;

	int i;

	s = va_arg(args, char *);

	if (s == NULL)
	{
	s = "(null)";
	}
	else if (*s == '\0')
	{
	return (-1);
	}
	for (i = 0; s[i]; i++)
	{
	_putchar(s[i]);
	}
	return (i);
}

/************************* PRINT PERCENT SIGN *************************/

/**
 * print_percent - Prints a percent sign
 * @args: Lista of argument
 * Return: Number of chars printed
 */

int print_percent(va_list args)
{
	(void)args;

	_putchar(37);

	return (1);
}
