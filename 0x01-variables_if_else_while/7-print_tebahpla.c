#include <stdio.h>

/**
 * main - prints the lowercasses alphabet in reverse,
 * Followed by a newline
 * Return - Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch  >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
