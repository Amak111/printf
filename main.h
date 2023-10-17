#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define NULL_STRING "(null)"

#define PARAMA_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE   1
#define CONVERT_UNSIGNED    2

/**
 * struct parameters - parameters struct
 *
 * @unsign: flag if unsigned value
 *
 * @plus_flag: If plus_flag specified
 * @space_flag: If _flag specified
 * @zero_flag: If _flag specified
 * @hashtag_flag: If hashtag_flag specified
 * @minus_flag: If _flag specified
 *
 * @width: Field width specified
 * @Precision: Field precision specified
 * @h_modifier: If h_modifier was specified
 * @l_modifier: If l_modifier was specified
*/

typedef struct parameters
{
	unsigned int unsign        : 1;
	unsigned int plus_flag     : 1;
	unsigned int space_flag    : 1;
	unsigned int hashtag_flag  : 1;
	unsigned int zero_flag     : 1;
	unsigned int minus_flag    : 1;

	unsigned int width;
	unsigned int Precision;

	unsigned int h_modifier;   : 1;
	unsigned int l_modifier;   : 1;
} params_t;

/**
 * struct specifier - Struct token
 *
 * @specifier: Format token
 * @f: The function associated
*/
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

/* _putchar.c module */
int _putchar(char c);

/* _printf.c module */
int _printf(const char *format, ...);

/* print_string.c */
int _strlen(char *s);
void print_char(va_list args);
void print_String(va_list args);

/* int_print.c module */
int int_print(va_list arg);
int deci_print(va_list arg);


#endif
