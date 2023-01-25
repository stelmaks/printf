#include "main.h"

/**
 * handle_print - Prints an argument based on its type
 * @format: Formatted string in which to print the arguments.
 *
 * Return:  void;
 */

int (*handle_print(const char *format))(va_list)
{
	int i;

	spec_s  my_spec_dict[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_unsig},
		{"x", print_unsig},
		{"X", print_unsig},
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
