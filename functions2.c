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
int a;
int expo = 1;
int count = 0;
unsigned int n;
a = va_arg(args, int);
if (a < 0)
{
int p = 45;
count = _putchar(p);
n = a * -1;
}
else
n = a;
while (n / expo > 9)
expo *= 10;
while (expo != 0)
{
int s = n / expo;
count =  _putchar(s + 48);
n = n % expo;
expo = expo / 10;
}
return (count);
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
unsigned int len, powten, j, digit, n, num;
int count = 0;
n = va_arg(args, unsigned int);
if (n != 0)
{
num = n;
len = 0;
while (num != 0)
{
num /= 10;
len++;
}
powten = 1;
for (j = 1; j <= len - 1; j++)
powten *= 10;
for (j = 1; j <= len; j++)
{
digit = n / powten;
_putchar(digit + '0');
count++;
n -= digit * powten;
powten /= 10;
}
}
else
{
_putchar('0');
return (1);
}
return (count);
}
