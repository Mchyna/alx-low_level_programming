#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	if (m < 0)
	{
		printf("%d is negative\n", m);

	}
	else if (m > 0)
	{
		printf("%d is positive\n", m);
	}
	else
		printf("%d is zero\n", m);
	return (0);

}
