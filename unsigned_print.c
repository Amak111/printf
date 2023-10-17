#include "main.h"

/**
 * unsigned_print - Prints integer
 * @arg: Argument to print
 * Return: Number of characters printed
*/

int unsigned_print(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);
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
