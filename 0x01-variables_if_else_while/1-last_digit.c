#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: 'last digit greater than five or less than six and not zero
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d is 0", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d is less than 6 and not 0", n, ld);
	}
	return (0);
}
