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
		{ "s", print_String },
		{ "d", print_decimal },
		{ "i", print_integer }
	};
	unsigned int i = 0;
	unsigned int j = 0;

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (j < 4)
			{
				if (format[i + 1] == *print_op[j].identifier)
				{
					print_op[j].f(list);
					i += 2;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}

	va_end(list);
	return (i);
}
