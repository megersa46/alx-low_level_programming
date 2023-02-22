#include "main.h"

/**
 * print_sign -pogram that ptint sign number
 * @n: checked int number
 * Return: 1 if n is greater than zero and if n is less than zero print -
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar (0 + '0');
return (0);
}
}
