#include <stdio.h>
#include "main.h"

/**
 * _strlen- Check string length
 * @s: An input string
 * Description: function count string length
 * Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * print_char - prints character
 * @args: arguments
 * Return: nothing
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);

}


/**
 * print_string - prints character
 * @args: arguments
 * Return: nothing
 */

int print_string(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}


/**
 * print_percent - prints percent mark
 * Return: nothing
 */

int print_percent(void)
{
	_putchar(37);
	return (1);
}
