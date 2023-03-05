#include "main.h"

/**
 * rev_string - Entry point
 * @s: String to reverse
 * Return: None
 */

void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
	swap_char(s + length, s + i);
	i++;
	length--;
}
}

/**
 * _strlen - Entry point
 * @s: String
 * Return: Length
 */

int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
	inc++;

return (inc);
}

/**
 * swap_char - Entry point
 * @a: First character
 * @b: Second character
 * Return: None
 */

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
