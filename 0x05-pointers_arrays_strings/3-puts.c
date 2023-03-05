#include "main.h"

/**
 * _puts - Entry point
 * @str: String
 * Description: Prints a string
 * On Success: Returns the number of characters printed
 */

void _puts(char *str)
{
while (*str)
	_putchar(*str++);

_putchar('\n');
}
