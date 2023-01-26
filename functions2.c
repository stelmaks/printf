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
unsigned int a[10];
unsigned int j = 1, m = 1000000000, n, sum = 0;
int counter = 0;

n = va_arg(args, unsigned int);
a[0] = n / m;
for (; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
for (j = 0; j < 10; j++)
{
sum += a[j];
if (sum || j == 9)
{
_putchar('0' + a[j]);
counter++;
}
}
return (counter);
}



int print_oct(va_list args)
{
unsigned int a[11];
unsigned int j = 1, m = 1073741824, n, sum = 0;
int counter;

n = va_arg(args, unsigned int);
a[0] = n / m;
for (; j < 11; j++)
{
m /= 8;
a[j] = (n / m) % 8;
}
for (j = 0; j < 11; j++)
{
sum += a[j];
if (sum || j == 10)
{
_putchar('0' + a[j]);
counter++;
}
}
return (counter);
}



int print_lx(va_list args)
{
unsigned int a[8];
unsigned int j = 1, m = 268435456, n, sum = 0;
char diff;
int counter = 0;

n = va_arg(args, unsigned int);
diff = 'a' - ':';
a[0] = n / m;
for (; j < 8; j++)
{
m /= 16;
a[j] = (n / m) % 16;
}
for (j = 0; j < 8; j++)
{
sum += a[j];
if (sum || j == 7)
{
if (a[j] < 10)
_putchar('0' + a[j]);
else
_putchar('0' + diff + a[j]);
counter++;
}
}
return (counter);
}


int print_uX(va_list args)
{
unsigned int a[8];
unsigned int j = 1, m = 268435456, n, sum = 0;
char diff;
int counter;

n = va_arg(args, unsigned int);
diff = 'A' - ':';
a[0] = n / m;
for (; j < 8; j++)
{
m /= 16;
a[j] = (n / m) % 16;
}
for (j = 0; j < 8; j++)
{
sum += a[j];
if (sum || j == 7)
{
if (a[j] < 10)
_putchar('0' + a[j]);
else
_putchar('0' + diff + a[j]);
counter++;
}
}
return (counter);
}
