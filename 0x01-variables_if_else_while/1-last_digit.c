#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - assign a random number to the variable n
 * the last digit of n is greater than 5
 * the last digit of n is 0
 * the last digit of n is less than 6 and not 0
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n=rand()-RAND_MAX/2;
	last=n%10;
	if (last>5)
		printf("Last digit of %i is %i and is greater than 5\n". last);
	else (last=0)
		printf("Last digit of %i is %i and is 0\n", last);
	while (last<6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",n,last);
	Return(0);
}
