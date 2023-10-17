#include "main.h"

/**
 * bin_print - converts number to binary
 * @val: Argument
 * Return: integar
*/

int bin_print(va_list val)
{
	int cont = 0;
	int flag = 0;
	int n = 1;
	int i, j;
	unsigned int x;
	unsigned int num = va_arg(val, unsigned int);

	for (i = 0; i < 32; i++)
	{
		x = ((n << (32 - i)) & num);
		if (x >> (31 - i))
			flag = 1;
		if (flag)
		{
			j = x >> (31 - i);
			_putchar(j + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
