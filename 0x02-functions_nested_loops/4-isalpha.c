#include "main.h"

/**
 * _isalpha - program print uppercase or lowercase
 * Return: 1 if letter and otherwise 0
 * @c: the character checked to be checked
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
