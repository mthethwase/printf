#include "main.h"
/**
 * i_putchar - print a character
 * @c: char input
 * Return:
 */
int i_putchar(char c)
{
	return (write(1, &c, 1));
}

