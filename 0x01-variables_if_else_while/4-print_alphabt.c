#include <stdio.h>
/**
 * main - entry point
 * Decription: 'Print all letters except q and e'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
