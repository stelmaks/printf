#include "main.h"
/**
 *_printf - is a function that selects function from array to print
 *@format: specifier to look for
 *Return: count
 */
int _printf (const char *format, ...)
{
int i =0;
int num = 0;
int count = 0;
va_list p_args;
int(*f)(va_list);
va_start(p_args, format);
if (format == NULL)
{
return (-1);
}
while (format[i])
{
if (format[i] != '%')
{
num = write(1, &format[i], 1);
count = count + num;
i++;
continue;
}
if (format[i] == '%')
{
f = handle_print(&format[i + 1]);
if (f != NULL)
{
num = f(p_args);
count = count + num;
i = i + 2;
continue;
}
if (format[i + 1] == '\0')
{
break;
}
if (format[i + 1] != '\0')
{
num = write(1, &format[i], 1);
count = count + num;
i++;
continue;  
}
}
}
return count;
}
