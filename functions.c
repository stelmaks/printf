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

	if (c)
	{
		int count =  0;

		count = write(1, &c, 1);

		return (count);
	}

	return (0);
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
	}

	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			write(1, &s[i], 1);
		}
	}
	return (len);
}

/************************* PRINT PERCENT SIGN *************************/

/**
 * print_percent - Prints a percent sign
 * @args: Lista of argument
 * Return: Number of chars printed
 */

int print_percent(va_list args)
{
	char s = (char)va_arg(args, int);

	if (s)
	{
		int p = 37;

		write(1, &p, 1);
	}

	return (0);
}
