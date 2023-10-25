#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 0; j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}
