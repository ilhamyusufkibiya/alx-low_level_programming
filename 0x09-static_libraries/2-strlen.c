#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int z;
	int count = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
		count++;
	return (count);
}
