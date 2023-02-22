#include "main.h"

/**
 * _islower - a program print lower letter
 * @c: is an integer parameter
 * Return: 1 if lower letter and 0 if not
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

