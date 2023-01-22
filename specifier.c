#include "main.h"

int (*specifier(const char *format))(va_list)
{
int i;
spec_s  my_spec_dict[4] = {
    {"c", print_char},
    {"s", print_str},
    {"%", print_cent},
    {NULL, NULL}
};
for (i = 0; my_spec_dict[i].s != NULL; i++)
{
if (*(my_spec_dict[i].s) == *format)
{
return (my_spec_dict[i].fom);
}
}
return (NULL);
}
