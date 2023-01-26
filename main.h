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

/*********Function Selector************/

int _printf(const char *format, ...);

/*********Format specifier**************/

int (*handle_print(const char *))(va_list);

/*********Print Chracter,t*****************/

int print_char(va_list);

/*********Print String*****************/

int print_string(va_list);

/*********Print percent*****************/

int print_percent(va_list);

/*********Print *****************/

int _putchar(char ch);

/*********Print Integer *****************/

int print_int(va_list);

/*********Print Binary*****************/

int print_bin(va_list);
/*********Print Binary*****************/
int int_unsig(va_list)

#endif

