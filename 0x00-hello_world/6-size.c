#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int m;
		long int c;
		long long int h;
		char y;
		float n;

		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
		return (0);
}
