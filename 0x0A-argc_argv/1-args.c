#include <stdio.h>
/**
 * main - prints number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: o
 */
int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
