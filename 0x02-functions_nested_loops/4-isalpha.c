#include "main.h"

/**
 * __isalpha - program that print uppercase & lowercase
 * Return: 1 if letter and 0 if not letter
 * @c: the character will checked
 */
int __isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' || c <= 'A' && c <= 'Z'));
}
