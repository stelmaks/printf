#include "main.h"
/************************* PRINT INT *************************/
/**
* print_int - function that prints an integer
* @args: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int print_int(va_list args)
{
int n = va_arg(args, int);
int num, last = n % 10, digit, exp = 1;
int  i = 1;
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit *exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
/************************* PRINT BINARY *************************/
/**
* print_bin - convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
unsigned int len, powten, j, digit, n, num;
int count = 0;

n = va_arg(b, unsigned int);
if (n != 0)
{
num = n;
len = 0;
while (num != 0)
{
num /= 2;
len++;
}
powten = 1;
for (j = 1; j <= len - 1; j++)
powten *= 2;
for (j = 1; j <= len; j++)
{
digit = n / powten;
_putchar(digit + '0');
count++;
n -= digit *powten;
powten /= 2;
}
}
else
{
_putchar('0');
return (1);
}
return (count);
}
/************************* PRINT Unsigned NUMBER *************************/
/**
 * print_unsig - function that prints unsigned number
 * @args: unsigned number
 * Descriptions: prints unsigned number with putchar
 * Return: size the output
 */
int print_unsig(va_list args)
{
unsigned int num;
num = va_arg(args, unsigned int);
if (num == 0)
{
return (unsgined_number(num));
}
if (num < 1)
{
return (-1);
}
return (unsgined_number(num));
}


/**
 * unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int unsgined_number(unsigned int n)
{
int div;
int len;
unsigned int num;

div = 1;
len = 0;

num = n;

for (; num / div > 9; )
{
div *= 10;
}
for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
