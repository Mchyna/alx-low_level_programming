#include "main.h"

/**
 * print_array - Entry point
 * @a: Array
 * @n: Number of elements
 * Return: None
 */

void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
	if (inc != n - 1)
		printf("%d, ", a[inc]);
	else
		printf("%d", a[inc]);

}
printf("\n");
}
