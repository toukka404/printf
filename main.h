#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"
#define PARAMS_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED  2

/**
 * struct parameters - parameters struct
 * @unsign: flag if unsigned value
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @zero_flag: on if _flag specified
 * @minus_flag: on if _flag specified
 *
 * @width: field width specified
 * @precision: field percision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 */
typedef struct parameters
{
	unsigned int unsign         : 1;
	unsigned int plus_flag      : 1;
	unsigned int space_flag     : 1;
	unsigned int hashtag_flag   : 1;
	unsigned int zero_flag      : 1;
	unsigned int minus_flag     : 1;

	unsigned int width          : 1;
	unsigned int precision      : 1;

	unsigned int h_modifier     : 1;
	unsigned int l_modifier     : 1;
} params_t;

/**
 * struct specifier - struct token
 * @specifier: format token
 * @f: the function asspciate
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

/*_putchar.c prototype */
int _putchar(char c);

/*_puts.c prototype*/
void _puts(char *str);


/* print numbers */
int _strlen(char *s);   /*_strlen.c prototype*/
int _isdigit(int c);    /*_isdigit.c prototype */

/*print_functions.c prototypes*/
/*you will add the int function in this file print_functions.c*/
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);


/* params.c prototype */
void init_params(params_t *params, va_list ap);


/* _printf.c prototype*/
int _printf(const char *format, ...);

#endif
