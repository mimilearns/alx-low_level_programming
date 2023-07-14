#include <stdio.h>
/**
 * main - entry point prints
 * Return: always 0 (success)
 */
int main(void)
{
	printf("The size of char data type: %lu byte(s)\n", sizeof(char));
	printf("The size of int: %lu byte(s)\n", sizeof(int));
	printf("The size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("The size of float data type: %lu byte(s)\n", sizeof(float));
	return (0);
}

