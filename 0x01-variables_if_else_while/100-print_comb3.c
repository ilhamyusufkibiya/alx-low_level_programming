#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
		putchar(d + '0');
	for (p = d + 1; p <= '9'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
