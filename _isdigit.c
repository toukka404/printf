#include "main.h"
/**
 * _isdigit - checkes for a digit 0 through 9
 * @c: the number to be checked
 * Return: 1 for digit or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
