#include <stdio.h>
/**
 * main - entry point
 * Description: 'Print the alphabet in lowercase and then in uppercase'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n  = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
