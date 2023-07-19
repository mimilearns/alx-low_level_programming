#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in the lowercase
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char x;

	i = 0;

	while (i < 10)
	{
	       x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
