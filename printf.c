#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - main printf function
 * @format: string
 * Return: Nothing
 */
int _printf(const char * const format, ...)
{
	va_list list;

	specifier_t print_op[] = {
		{ "c", print_char },
		{ "s", print_string },
		{ "%", print_percent }
	};
		/*{ "d", deci_print},*/
		/*{ "i", int_print},*/
		/*{ "b", bin_print},*/
		/*{ "u", unsigned_print},*/
		/*{ "o", oc_print},*/
		/*{ "x", hex_print},*/
		/*{ "X", HEX_print}*/
	/*};*/
	int i = 0, j = 0, len = 0;

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (j < 2)
			{
				if (format[i + 1] == *print_op[j].specifier)
				{
					len += print_op[j].f(list);
					i += 2;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}

	va_end(list);
	return (len);
}
