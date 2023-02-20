#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int n,digit;
	scanf("%d",&n);
        srand(time(0));
        n = rand() - RAND_MAX / 2;
	scanf("%d",&n);
	digit=n%10;
	printf("last digit:%d",digit);
        return (0);
}
