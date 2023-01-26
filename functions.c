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

	int len;

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
/************************* PRINT UNSIGNED OCTAL *******************/
/**
 * print_oct - function that prints unsigned number
 * @args: unsigned number
 * Return: size the output
 */
int print_oct(va_list args)
{
int i;
int *array;
int counter = 0;
unsigned int num = va_arg(args, unsigned int);
unsigned int temp = num;
while (num / 8 != 0)
{
num /= 8;
counter++;
}
counter++;
array = malloc(counter *sizeof(int));
for (i = 0; i < counter; i++)
{
array[i] = temp % 8;
temp /= 8;
}
for (i = counter - 1; i >= 0; i--)
{
_putchar(array[i] + '0');
}
free(array);
return (counter);
}
