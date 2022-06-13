#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to tbe reserved
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
