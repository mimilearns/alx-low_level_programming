#include <stdio.h>
/**
 * main - entry point
 * Description: 'Print all the numbers in base 16 in lowercase'
 * Return: always 0
 */
int main(void)
{
	int n;
	int x;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (x  = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
