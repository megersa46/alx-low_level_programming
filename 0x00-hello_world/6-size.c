#include <stdio.h>
/**
 * main -A program that print different size types of output
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int x;
	float y;
printf("size of a char: %lu byte(s)\n", (Unsigned long)sizeof(a));
printf("size of a int: %lu byte(s)\n", (Unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (Unsigned long)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (Unsigned long)sizeof(x));
printf("size of a float: %lu byte(s)\n", (Unsigned long)sizeof(y));
return (0);
}
