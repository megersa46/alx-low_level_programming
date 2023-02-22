#include "main.h"

/**
 * main - a program print lower letter
 *
 * return: 1 if lower letter and 0 if not
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

