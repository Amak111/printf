#include "main.h"

/**
 * oc_print - Converts number to octal
 * @val: Variable parameter
 * Return: count
*/

int oc_print(va_list val)
{
	int count = 0;
	int i, *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int n = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = n % 8;
		n = n / 8;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);

	return (count);
}
