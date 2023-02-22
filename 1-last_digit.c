#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -A program that print a line last digit
 *
 * return: 0 (success)
 */
int main(void)
{
int n, m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5) 
{
 printf("The last digit of %d is %d and is 5 \n",n,m);	
}
 else if (m == 0)
{
printf("The last digit of %d is %d and is 0 \n",n,m);
}
else if (m < 6 && m!= 0)
{
printf("The last digit of %d is %d and is greather than 6 and is not 0 \n",n,m);
}
		  
	return (0);
}

