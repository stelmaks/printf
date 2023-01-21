#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct spec - match the conversion specifiers for printf
 * @s: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @fom: type pointer to function for the conversion specifier
 *
 */
typedef struct spec
{
char *s;
int (*fom)(va_list);
}spec_s;
int _printf(const char *format, ...);
int (*specifier(const char *))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

#endif
