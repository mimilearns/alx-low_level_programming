#include <stdio.h>
/**
 * main - entry point
 * Description: 'Print the alphabet in lowercase'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n  = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
