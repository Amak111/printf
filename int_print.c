#include "main.h"

/**
 * int_print - Prints integer
 * @arg: Argument to print
 * Return: Number of characters printed
*/

int int_print(va_list arg)
{
	int x = va_arg(arg, int);
	int num, dig;
	int last = x % 10, i = 1, exe = 1;

	x = x / 10;
	num = x;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		x = -x;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exe = exe * 10;
			num = num / 10;
		}
		num = x;
		while (exe > 0)
		{
			digit = num / exe;
			_putchar(dig + '0');
			num = num - (dig * exe);
			exe = exe / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

#include "main.h"

/**
 * deci_print - Prints decimal
 * @arg: Argument to print
 * Return: Number of characters printed
*/

int deci_print(va_list arg)
{
	int x = va_arg(arg, int);
	int num, dig;
	int last = x % 10, i = 1, exe = 1;

	x = x / 10;
	num = x;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		x = -x;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exe = exe * 10;
			num = num / 10;
		}
		num = x;
		while (exe > 0)
		{
			digit = num / exe;
			_putchar(dig + '0');
			num = num - (dig * exe);
			exe = exe / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
