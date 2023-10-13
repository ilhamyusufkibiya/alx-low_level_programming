#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @C: function parameter
 * Return: 1 if sucess and 0 on failure
 */

int _isupper(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}



