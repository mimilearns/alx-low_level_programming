#include <stdio.h>

/**
 * Description - prints all possible different combination of two digits
 * Return: always 0
 */
int main(void)
{
	for (int i = 0; i <= 8; i++)
	
		for (int j = i + 1; j <= 9; j++)
		{
			int num1 = i + 48;
			int num2 = j + 48;
		if ((num1 == '0' && num2 == '1') || (num1 == '1' && num2 == '0'))
		continue;
		putchar(num1);
		putchar(num2);
		if (i != 8)
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
