#include "main.h"
#include <string.h>

/**
 * _strncat - conctenate two strings.
 * @dest: destination strings.
 * @src: source string
 * Return: dest
 * @n: number of bytes to conctenate
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}

