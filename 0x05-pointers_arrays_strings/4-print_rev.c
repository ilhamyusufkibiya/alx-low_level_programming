#include "main.h"

/**
 * print_rev - A function that print string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int z;
	int count = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
		count++;
	for (z = count - 1 ; z >= 0 ; z--)
		_putchar(s[z]);
	_putchar('\n');
}
