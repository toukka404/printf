#include "main.h"
#include <stdio.h>
/**
 * _puts -  prints a string, followed by a new line
 * @str: string to be printed
 * Return: Always 0
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
	{
		_putchar(*str++);
	}
	return (str - a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
