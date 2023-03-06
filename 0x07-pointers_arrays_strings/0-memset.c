cat > _putchar.c

#include "main.h"                                                                                                       #include <unistd.h> 
/**
 * _putchar - entry point
 * @c: character to print
 * Return: 1 Success or -1 Error
 */

int _putchar(char c)
{
	 return (write(1, &c, 1));
}
