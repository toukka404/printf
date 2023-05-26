#include "main.h"
#include <stdio.h>
/**
 * _strlen -  returns the length of a string
 * @s: value of string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
