#include "main.h"

/**
 * _abs - computer the absolute value of an integer
 * @a: absolute number is to be found
 *  Return: absolute value of the number
 */

int _abs(int a)
{
	if (a < 0)
	a *= -1;
	return (a);
}
