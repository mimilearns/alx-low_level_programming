#include "main.h"
/**
 * main - Entry point
 * print_alphabet: 'Print the alphabet in lowercase'
 * Return: always 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
