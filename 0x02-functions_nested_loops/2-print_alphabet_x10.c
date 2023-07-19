#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in the lowercase
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	c = 0;
	while (c <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	c++;
	}
	_putchar('\n');
}
