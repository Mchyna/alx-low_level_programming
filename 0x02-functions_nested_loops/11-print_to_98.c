#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: Integer to start at
 * Return: None
 */

void print_to_98(int n)
{
if (n >= 98)
{
	while (n > 98)
		printf("%d, ", n--);

	printf("%d\n", n);
}
else
{
	while (n < 98)
		printf("%d, ", n++);

	printf("%d\n", n);
}
}
