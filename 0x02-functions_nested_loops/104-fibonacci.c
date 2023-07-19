#include <stdio.h>
/**
 * main - fibonacci
 * Purpose - no hardcode
 * Return:  (Success)
 */
int main(void)
{
	int count;
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;
	printf("%u, %u, ", a, b);
	
	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf("%u", c);

	if (count != 98)
	{
		printf(", ");
	}

	a = b;
	b = c;
	}

	printf("\n");
	return (0);
}
