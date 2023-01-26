#ifndef  _MAIN_H_
#define  _MAIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#define UNUSED(x) (void)(x)
/**
 * struct spec - match the conversion specifers for prinf
 * @s: type char pointer of the specifier
 * @fom: type pointer to function for the conversion specifier
 *
 * Return: the pointer to dest
 */
typedef struct spec
{
char *s;
int (*fom)(va_list);
}
spec_s;
/*********FUNCTION SELECTOR************/
int _printf(const char *format, ...);
/*********FORMAT SPECIFIER**************/
int (*handle_print(const char *))(va_list);
/*********Print CHARACTER*****************/
int print_char(va_list);
/*********PRINT STRING*****************/
int print_string(va_list);
/*********PRINT PERCENT*****************/
int print_percent(va_list);
/*********PUTCHARACTER*****************/
int _putchar(char ch);
/*********PRINT INTERGER *****************/
int print_int(va_list);
/*********PRINT BINARY*****************/
int print_bin(va_list);
/*********PRINT UNSIGNED*****************/
int print_unsig(va_list);
int unsgined_number(unsigned int n);
#endif

