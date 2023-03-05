#include "main.h"

/**
 * swap_int - Entry point
 * @a: First integer
 * @b: Second integer
 * Return: None
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
